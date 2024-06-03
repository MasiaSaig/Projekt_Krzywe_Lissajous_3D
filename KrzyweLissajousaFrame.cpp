#include "KrzyweLissajousaFrame.h"

//constexpr double PI = 3.14159265;

KrzyweLissajousaFrame::KrzyweLissajousaFrame(wxWindow* parent)
	: _spherical_coordinates{ false }, _drawingMethod{ false },
	_ampX{ 5 }, _ampY{ 5 }, _ampZ{ 5 },
	_aX{ 1 }, _bY{ 2 }, _cZ{ 3 },
	_shiftX{ 0 }, _shiftY{ 0 }, _shiftZ{ 0 },
	_angleX{ 0 }, _angleY{ 0 }, _angleZ{ 0 },
	Frame(parent)
{
	// ustawienie punktów
	_data_points = new Point3D[_nodes];
	// ustawienie punktów osi, na najniższe wartości, !nie środek układu, tj. nie punkt (0,0,0)!

	this->SetMinSize({ 625, 750 });
	this->SetBackgroundColour(wxColor(192, 192, 192));
	this->wxTopLevelWindow::SetTitle(wxVERSION_STRING);

	// przypisanie etykietom(static text) napisów z kodami unicode
	coordinates_RadioBox->SetLabel(L"Wsp\u00f3rz\u0119dne");
	drawingMethod_RadioBox->SetLabel(L"Spos\u00f3b rysowania");
	rotationX_text->SetLabel(L"Obr\u00f3t X");
	rotationY_text->SetLabel(L"Obr\u00f3t Y");
	rotationZ_text->SetLabel(L"Obr\u00f3t Z");
	function_x->SetLabel(L"x(t)=Asin(at+\u03b1)");
	function_y->SetLabel(L"y(t)=Bsin(bt+\u03B2)");
	function_z->SetLabel(L"z(t)=Csin(ct+\u03B3)");
	function_r->SetLabel(L"");	// r=sqrt(x\u00B2 + y\u00B2 + z\u00B2)
	function_theta->SetLabel(L""); // \u03c6=atan2(y,x)
	function_phi->SetLabel(L""); // \u03b8=acos(z/r)
	shiftX_text->SetLabel(L"\u03B1");
	shiftY_text->SetLabel(L"\u03B2");
	shiftZ_text->SetLabel(L"\u03B3");

	coordinates_RadioBox->SetString(1, L"(r, \u03c6, \u03b8)"); //r, phi, theta
	coordinates_RadioBox->SetSelection(0);	// ponownie wybiera (x,y,z)
	drawingMethod_RadioBox->SetSelection(0);

	rotationX_slider->SetValue(_angleX);
	rotationY_slider->SetValue(_angleY);
	rotationZ_slider->SetValue(_angleZ);

	rotationX_value->SetLabelText(std::to_string(_angleX));
	rotationY_value->SetLabelText(std::to_string(_angleY));
	rotationZ_value->SetLabelText(std::to_string(_angleZ));

	amplitudeX_slider->SetValue(_ampX * 10.0);
	amplitudeY_slider->SetValue(_ampY * 10.0);
	amplitudeZ_slider->SetValue(_ampZ * 10.0);

	amplitudeX_value->SetLabelText(double_to_string(_ampX));
	amplitudeY_value->SetLabelText(double_to_string(_ampY));
	amplitudeZ_value->SetLabelText(double_to_string(_ampZ));

	aX_slider->SetValue(_aX);
	bY_slider->SetValue(_bY);
	cZ_slider->SetValue(_cZ);

	aX_value->SetLabelText(double_to_string(_aX));
	bY_value->SetLabelText(double_to_string(_bY));
	cZ_value->SetLabelText(double_to_string(_cZ));

	shiftX_slider->SetValue(_shiftX);
	shiftY_slider->SetValue(_shiftY);
	shiftZ_slider->SetValue(_shiftZ);

	shiftX_value->SetLabelText(double_to_string(_shiftX));
	shiftY_value->SetLabelText(double_to_string(_shiftY));
	shiftZ_value->SetLabelText(double_to_string(_shiftZ));

	updateDataForDrawing();
	Repaint();
}

KrzyweLissajousaFrame::~KrzyweLissajousaFrame()
{
	delete[] _data_points;
}

/**
 * @brief Funkcja aktualizująca macierze transformacji, dla punktów krzywych Lissajousa.
 */
void KrzyweLissajousaFrame::updateDataForDrawing() {
	wxSize panelSize = drawingPanel->GetSize();
	double Sx = panelSize.x / 2.0;
	double Sy = panelSize.y / 2.0;
	double Sz = 1.0;


	// obliczanie punktów do wyrysowania osi współrzędnych (niebieskich odcinków)
	double z_axis_shift;
	double axes_lenght;
	_axis_points[0] = Point3D();
	if (_spherical_coordinates) {
		axes_lenght = amplitudeX_slider->GetValue() / 25.0;
		z_axis_shift = (2.0 * amplitudeX_slider->GetMax() / 10.0) + 3.0;
	}
	else {
		z_axis_shift = (2.0 * amplitudeZ_slider->GetMax() / 10.0) + 3.0;
		axes_lenght = std::min({ amplitudeX_slider->GetValue(),amplitudeY_slider->GetValue(),amplitudeZ_slider->GetValue() }) / 25.0;
	}

	_axis_points[1] = { axes_lenght, 0, 0 };
	_axis_points[2] = { 0, axes_lenght, 0 };
	_axis_points[3] = { 0, 0, axes_lenght };

	// wyznaczenie Sx==Sy aby wykresy nie rozszerzały się, nierównomiernie
	// oraz obliczenie paddingu po lewej i prawej stronie wykresu, aby był rysowany na środku panelu
	int padding;
	if (Sx < Sy) {
		Sy = Sx;
		padding = (panelSize.y - panelSize.x) / 2;
		_transform_matrix = macierzTranslacji(0, -padding, 0);
	}
	if (Sx > Sy) {
		Sx = Sy;
		padding = (panelSize.x - panelSize.y) / 2;
		_transform_matrix = macierzTranslacji(padding, 0, 0);
	}

	// przesunięcie układu do tyłu ekranu (w stronę + osi Z)
	_transform_matrix_before_scale = macierzTranslacji(0, 0, z_axis_shift);

	// początkowe obrócenie układu i współrzędnych
	_transform_matrix_before_scale = _transform_matrix_before_scale * macierzObrotuX(-90);
	_transform_matrix_before_scale = _transform_matrix_before_scale * macierzObrotuZ(45);
	_transform_matrix_before_scale = _transform_matrix_before_scale * macierzObrotuX(-15);
	_transform_matrix_before_scale = _transform_matrix_before_scale * macierzObrotuY(15);

	// skopiowanie macierzy transformacji przed obróceniem do macierzy transformacji osi
	// aby zapobiez zastosowaniu obrodu do osi współrzędnych
	_transform_matrix_before_scale_axis = _transform_matrix_before_scale;

	// obrót wykresu
	_transform_matrix_before_scale = _transform_matrix_before_scale * macierzObrotuX(_angleX);
	_transform_matrix_before_scale = _transform_matrix_before_scale * macierzObrotuY(_angleY);
	_transform_matrix_before_scale = _transform_matrix_before_scale * macierzObrotuZ(_angleZ);

	// zastosowanie obrotu do osi współrzędnych (można użyć do testów)
	//_transform_matrix_before_scale_axis = _transform_matrix_before_scale;

	// przesunięcie środka do lewego-dolnego rogu -> przeskalowanie punktów -> przesunięcie środka na środek drawingPanel
	_transform_matrix = _transform_matrix * macierzTranslacji(0, panelSize.y, 0) * (macierzSkalowania(Sx, Sy, Sz) * macierzTranslacji(1, -1, 0));
	_transform_matrix = _transform_matrix * macierzRzutowania3Dna2D(-1.0, 1.0, 1.0, -1.0, 1.0, 40.0);
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość kąta obrotu osi OX, który przyjmuje wartości(int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaFrame::rotationX_Update(wxScrollEvent& event) {
	// zmiana kąta od 0 do 360
	_angleX = rotationX_slider->GetValue();
	rotationX_value->SetLabelText(std::to_string(_angleX));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość kąta obrotu osi OY, który przyjmuje wartości(int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaFrame::rotationY_Update(wxScrollEvent& event) {
	// zmiana kąta od 0 do 360
	_angleY = rotationY_slider->GetValue();
	rotationY_value->SetLabelText(std::to_string(_angleY));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość kąta obrotu osi OZ, który przyjmuje wartości(int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaFrame::rotationZ_Update(wxScrollEvent& event) {
	// zmiana kąta od 0 do 360
	_angleZ = rotationZ_slider->GetValue();
	rotationZ_value->SetLabelText(std::to_string(_angleZ));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany sposobu rysowania, która aktualizuje wartość metody rysowania(bool) 0 - punkty, 1 - odcinki.
 * @param event
 */
void KrzyweLissajousaFrame::sposobRysowania_update(wxCommandEvent& event) {
	_drawingMethod = !_drawingMethod;

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany współrzędnych, która aktualizuje tekst wyświetlanych wzorów po prawej oraz wartość używanych współrzędnych(bool) 0 - (x,y,z), 1 - (r, theta, phi).
 * @param event
 */
void KrzyweLissajousaFrame::coordinates_update(wxCommandEvent& event) {
	if (coordinates_RadioBox->GetSelection() == 0) {	// współrzędne kartezjańskie (x,y,z)
		function_x->SetLabel(L"x(t)=Asin(at+\u03b1)");
		function_y->SetLabel(L"y(t)=Bsin(bt+\u03B2)");
		function_z->SetLabel(L"z(t)=Csin(ct+\u03B3)");
		function_r->SetLabel(L"");	// r=sqrt(x\u00B2 + y\u00B2 + z\u00B2)
		function_theta->SetLabel(L""); // \u03c6=atan2(y,x)
		function_phi->SetLabel(L""); // \u03b8=acos(z/r)

		amplitudeY_slider->Enable();
		amplitudeZ_slider->Enable();
	}
	else {
		function_x->SetLabel(L"x=rsin(\u03b8)cos(\u03c6)");
		function_y->SetLabel(L"y=rsin(\u03b8)sin(\u03c6)");
		function_z->SetLabel(L"z=rcos(\u03b8)");
		function_r->SetLabel(L"r(t)=Asin(at+\u03b1)");
		function_theta->SetLabel(L"\u03c6(t)=bt+\u03B2"); //phi
		function_phi->SetLabel(L"\u03b8(t)=ct+\u03B3"); //theta

		amplitudeY_slider->Disable();
		amplitudeZ_slider->Disable();
	}
	_spherical_coordinates = !_spherical_coordinates;

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość amplitudy A(double) od 0.0 do 10.0.
 * @param event
 */
void KrzyweLissajousaFrame::A_update(wxScrollEvent& event) {
	// zmiana amplitudy A od 0 do 100, więc dzielimy przez 10, aby otrzymać zakres od 0.0 do 10.0 (double)
	_ampX = static_cast<double>(amplitudeX_slider->GetValue()) / 10.0;
	amplitudeX_value->SetLabelText(double_to_string(_ampX));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość a(int) od 0 do 20.
 * @param event
 */
void KrzyweLissajousaFrame::a_update(wxScrollEvent& event) {
	// zmiana a od 0 do 20 (int)
	_aX = aX_slider->GetValue();
	aX_value->SetLabelText(std::to_string(_aX));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość przesunięcia funkcji x(t) (int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaFrame::f_a_update(wxScrollEvent& event) {
	// zmiana kąta od 0 do 360 (int)
	_shiftX = degrees_to_radians(shiftX_slider->GetValue());
	shiftX_value->SetLabelText(std::to_string(shiftX_slider->GetValue()));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość amplitudy B(double) od 0.0 do 10.0.
 * @param event
 */
void KrzyweLissajousaFrame::B_update(wxScrollEvent& event) {
	// zmiana amplitudy B od 0 do 100, więc dzielimy przez 10, aby otrzymać zakres od 0.0 do 10.0 (double)
	_ampY = static_cast<double>(amplitudeY_slider->GetValue()) / 10.0;
	amplitudeY_value->SetLabelText(double_to_string(_ampY));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość b(int) od 0 do 20.
 * @param event
 */
void KrzyweLissajousaFrame::b_update(wxScrollEvent& event) {
	// zmiana b od 0 do 20 (int)
	_bY = bY_slider->GetValue();
	bY_value->SetLabelText(std::to_string(_bY));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość przesunięcia funkcji y(t) (int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaFrame::f_b_update(wxScrollEvent& event) {
	// zmiana kąta od 0 do 360 (int)
	_shiftY = degrees_to_radians(shiftY_slider->GetValue());
	shiftY_value->SetLabelText(std::to_string(shiftY_slider->GetValue()));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość amplitudy C(double) od 0.0 do 10.0.
 * @param event
 */
void KrzyweLissajousaFrame::C_update(wxScrollEvent& event) {
	// zmiana amplitudy C od 0 do 100, więc dzielimy przez 10, aby otrzymać zakres od 0.0 do 10.0 (double)
	_ampZ = static_cast<double>(amplitudeZ_slider->GetValue()) / 10.0;
	amplitudeZ_value->SetLabelText(double_to_string(_ampZ));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość c(int) od 0 do 20.
 * @param event
 */
void KrzyweLissajousaFrame::c_update(wxScrollEvent& event) {
	// zmiana c od 0 do 20 (int)
	_cZ = cZ_slider->GetValue();
	cZ_value->SetLabelText(std::to_string(_cZ));

	updateDataForDrawing();
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość przesunięcia funkcji z(t) (int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaFrame::f_c_update(wxScrollEvent& event) {
	// zmiana kąta od 0 do 360 (int)
	_shiftZ = degrees_to_radians(shiftZ_slider->GetValue());
	shiftZ_value->SetLabelText(std::to_string(shiftZ_slider->GetValue()));

	updateDataForDrawing();
	Repaint();
}


// ----------------------------------------------------------------------------------------------

/**
 * @brief Zastosowanie podanej macierzy transformacji, na podanym punkcie punktach.
 * @param t Macierz transformacji o wymiarach 4x4, typu Matrix4d.
 */
void point2d(const Matrix4d& t, Point3D& p) {
	auto [x, y, z] = p;

	Vector4d v1(x, y, z);
	v1 = t * v1;

	p.x = v1[0] / v1[3];
	p.y = v1[1] / v1[3];
	p.z = v1[2] / v1[3];

}

/**
 * @brief Funkcja obliczająca współrzędne kartezjanskie.
 * @param t Czas (double)
 * @return Obliczone wartości współrzędnych (Point3D)
 */
Point3D KrzyweLissajousaFrame::calcCartesianPoint3D(double t) const {
	return { _ampX * std::sin(_aX * t + _shiftX), _ampY * std::sin(_bY * t + _shiftY), _ampZ * std::sin(_cZ * t + _shiftZ) };
}

/**
 * @brief Funkcja obliczająca współrzędne sferyczne.
 * @param t Czas (double)
 * @return Obliczone wartości współrzędnych (Point3D)
 */
Point3D KrzyweLissajousaFrame::calcSphericalPoint3D(double t) const {
	return { _ampX * std::sin(_aX * t + _shiftX), _bY * t + _shiftY, _cZ * t + _shiftZ };
}

/**
 * @brief Funkcja wywołująca Repaint() podczas zmiany rozmiaru okna.
 * @param event
 */
void KrzyweLissajousaFrame::OnSizeChange(wxSizeEvent& event) {
	updateDataForDrawing();
	Repaint();
}

void KrzyweLissajousaFrame::calculateCoordinates() {
	if (_spherical_coordinates) {
		for (int i = 0; i < _nodes; ++i) {
			_data_points[i] = calcSphericalPoint3D(2.0 * M_PI * i / _nodes);
		}
	}
	else {
		for (int i = 0; i < _nodes; ++i) {
			_data_points[i] = calcCartesianPoint3D(2.0 * M_PI * i / _nodes);
		}
	}

};

void KrzyweLissajousaFrame::Repaint() {
	/*
		Pomysł na rysowanie:
		Stworzenie dodatkowego wątku, który będzie aktualizawoał drawingPanel co jakiś czas np. 30 razy na sekunde (30fps), poprzez wywoływanie Refresh()
		https://stackoverflow.com/questions/46903244/how-to-run-an-event-while-another-event-is-running-in-wxwidgets-gui
		https://docs.wxwidgets.org/3.0/group__group__class__threading.html
		można dodać przyciski play, stop w których stworzy/usunie się wątek odpowiedzialny za wywoływanie Refresh()

		Lub posłużyć się animacjami??:
		https://youtu.be/nuGpVppgV7c?si=UJqiCyuynRl-TThT&t=61
	*/

	wxClientDC MyClientDC(drawingPanel);
	wxBufferedDC dc(&MyClientDC, drawingPanel->GetClientSize());

	dc.SetBackground(wxBrush(wxColour(255, 255, 255), wxBRUSHSTYLE_SOLID));
	dc.Clear();

	// obliczanie punktów
	calculateCoordinates();

	// TODO: Sprawdzenie czy krzywe we współrzędnych biegunowych, dobrze się rysują
	// TODO: Dodanie wartości na osiach 

	Point3D p1, p2;
	//rysowanie odcinków osi
	dc.SetPen(wxPen(RGB(0, 0, 160)));

	p1 = _axis_points[0];
	point2d(_transform_matrix_before_scale, p1);
	point2d(_transform_matrix, p1);

	for (int i = 1; i < 4; ++i) {
		p2 = _axis_points[i];
		point2d(_transform_matrix_before_scale, p2);
		point2d(_transform_matrix, p2);

		dc.DrawLine(p1.x, p1.y, p2.x, p2.y);
	}
	dc.SetPen(wxPen(RGB(0, 0, 0)));

	if (_drawingMethod) {	// rysowanie odcinków
		for (int i = 0; i < _nodes; ++i) {
			p1 = _data_points[i];
			p2 = _data_points[i == _nodes - 1 ? 0 : i + 1];

			if (_spherical_coordinates) {
				to_cartesian(p1);
				to_cartesian(p2);
			}

			point2d(_transform_matrix_before_scale, p1);
			point2d(_transform_matrix_before_scale, p2);

			if ((p1.z > 1.0) && (p2.z > 1.0)) {	// zapobiega wyrysowanu odcinków za ekranem wyświetlania
				point2d(_transform_matrix, p1);
				point2d(_transform_matrix, p2);

				dc.DrawLine(p1.x, p1.y, p2.x, p2.y);
			}
		}
	}
	else {		// rysowanie punktów
		for (int i = 0; i < _nodes; ++i) {
			p1 = _data_points[i];

			if (_spherical_coordinates)
				to_cartesian(p1);

			point2d(_transform_matrix_before_scale, p1);

			if (p1.z > 1.0) {	// zapobiega wyrysowanu punktów za ekranem wyświetlania
				point2d(_transform_matrix, p1);
				dc.DrawCircle(static_cast<int>(p1.x), static_cast<int>(p1.y), 1);
			}
		}
	}
}