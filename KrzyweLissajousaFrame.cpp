#include "KrzyweLissajousaFrame.h"

constexpr double PI = 3.14159265;

KrzyweLissajousaFrame::KrzyweLissajousaFrame(wxWindow* parent)
	: _coordinates{ false }, _drawingMethod{ false },
	_ampX{ 1 }, _ampY{ 1 }, _ampZ{ 1 },
	_aX{ 1 }, _bY{ 1 }, _cZ{ 1 },
	_shiftX{ 0 }, _shiftY{ 0 }, _shiftZ{ 0 },
	_angleX{ 0 }, _angleY{ 0 }, _angleZ{ 0 },
	Frame(parent)
{
	// ustawienie punktów
	_data_points = new double[_nodes][3];
	// ustawienie punktów osi, na najniższe wartości !nie środek układu, tj. nie punkt (0,0,0)!
	_axis_points[0][0] = -amplitudeX_slider->GetMax()/10.0; _axis_points[0][1] = -amplitudeY_slider->GetMax()/10.0; _axis_points[0][2] = -amplitudeZ_slider->GetMax()/10.0;
	_axis_points[1][0] = amplitudeX_slider->GetMax()/10.0 + 1; _axis_points[1][1] = _axis_points[0][1]; _axis_points[1][2] = _axis_points[0][2];
	_axis_points[2][0] = _axis_points[0][0]; _axis_points[2][1] = amplitudeY_slider->GetMax()/10.0 + 1; _axis_points[2][2] = _axis_points[0][2];
	_axis_points[3][0] = _axis_points[0][0]; _axis_points[3][1] = _axis_points[0][1]; _axis_points[3][2] = amplitudeZ_slider->GetMax()/10.0 + 1;


	SetMinSize({ 625, 650 });
	this->SetBackgroundColour(wxColor(192, 192, 192));

	// przypisanie napisów z kodami unicode, etykietom(static text)
	coordinates_RadioBox->SetLabel(L"Wsp\u00f3rz\u0119dne");
	drawingMethod_RadioBox->SetLabel(L"Spos\u00f3b rysowania");
	rotationX_text->SetLabel(L"Obr\u00f3t X");
	rotationY_text->SetLabel(L"Obr\u00f3t Y");
	rotationZ_text->SetLabel(L"Obr\u00f3t Z");
	function_x->SetLabel(L"x(t)=Asin(at+\u03b1)");
	function_y->SetLabel(L"y(t)=Bsin(bt+\u03B2)");
	function_z->SetLabel(L"z(t)=Csin(ct+\u03B3)");
	shiftX_text->SetLabel(L"\u03B1");
	shiftY_text->SetLabel(L"\u03B2");
	shiftZ_text->SetLabel(L"\u03B3");

	coordinates_RadioBox->SetString(1, L"(r, \u03b8, \u03c6)");
	coordinates_RadioBox->SetSelection(0);	// ponownie wybiera (x,y,z)
	drawingMethod_RadioBox->SetSelection(0);

	Repaint();
}

KrzyweLissajousaFrame::~KrzyweLissajousaFrame()
{
	delete[] _data_points;
}


static std::string double_to_string(double val) {
	std::string amp = std::to_string(val);
	amp.erase(amp.find_last_not_of('0') + 1, std::string::npos);
	amp.erase(amp.find_last_not_of('.') + 1, std::string::npos);
	return amp;
}
inline static double degrees_to_radians(int deg) {
	return deg * PI / 180.0;
}


/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość kąta obrotu osi OX, który przyjmuje wartości(int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaFrame::rotationX_Update(wxScrollEvent& event) {
	// zmiana kąta od 0 do 360
	_angleX = rotationX_slider->GetValue();
	rotationX_value->SetLabelText(std::to_string(_angleX));
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
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany sposobu rysowania, która aktualizuje wartość metody rysowania(bool) 0 - punkty, 1 - odcinki.
 * @param event
 */
void KrzyweLissajousaFrame::sposobRysowania_update(wxCommandEvent& event) {
	_drawingMethod = !_drawingMethod;
	Repaint();
}

/**
 * @brief Funkcja wywoływana podczas zmiany współrzędnych, która aktualizuje tekst wyświetlanych wzorów u góry po prawej oraz wartość używanych współrzędnych(bool) 0 - (x,y,z), 1 - (r, theta, phi).
 * @param event
 */
void KrzyweLissajousaFrame::coordinates_update(wxCommandEvent& event) {
	if (coordinates_RadioBox->GetSelection() == 0) {
		function_x->SetLabel(L"x(t)=Asin(at+\u03b1)");
		function_y->SetLabel(L"y(t)=Bsin(bt+\u03b2)");
		function_z->SetLabel(L"z(t)=Csin(ct+\u03b3)");
	}
	else {
		// TODO: zmiana współrzędnych na biegunowe, ?walcowe?, ?sferyczne?
		function_x->SetLabel(L"r(t)=Asin(at+\u03b1)");
		function_y->SetLabel(L"\u03b8(t)=Bsin(bt+\u03b2)");
		function_z->SetLabel(L"\u03c6(t)=Csin(ct+\u03b3)");
	}
	_coordinates = !_coordinates;
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
	Repaint();
}


/**
 * @brief Zastosowanie podanej macierzy transformacji, na podanych dwóch punktach.
 * @param t Macierz transformacji o wymiarach 4x4, typu Matrix4d.
 */
static void line2d(Matrix4d t, double* x1, double* y1, double* z1, double* x2, double* y2, double* z2) {
	Vector4d v1(*x1, *y1, *z1);
	v1 = t * v1;
	*x1 = v1[0] / v1[3];
	*y1 = v1[1] / v1[3];
	*z1 = v1[2] / (v1[3]);	// * 2.0
	v1[0] = *x2;
	v1[1] = *y2;
	v1[2] = *z2;
	v1[3] = 1.0;
	v1 = t * v1;
	*x2 = v1[0] / v1[3];
	*y2 = v1[1] / v1[3];
	*z2 = v1[2] / (v1[3]);	//  * 2.0
}
// ------------------------------------

/**
 * @brief Funkcja obliczająca wartość X, dla określonej amplitudy, 'a' oraz kąta przesunięcia.
 * @param[in] t Czas.
 * @return Wartość, zależna od podanego t.
 */
double KrzyweLissajousaFrame::functionX(double t) const {
	return _ampX * sin(_aX * t + _shiftX);
}
/**
 * @brief Funkcja obliczająca wartość Y, dla określonej amplitudy, 'b' oraz kąta przesunięcia.
 * @param[in] t Czas.
 * @return Wartość, zależna od podanego t.
 */
double KrzyweLissajousaFrame::functionY(double t) const {
	return _ampY * sin(_bY * t + _shiftY);
}
/**
 * @brief Funkcja obliczająca wartość X, dla określonej amplitudy, 'c' oraz kąta przesunięcia.
 * @param[in] t Czas.
 * @return Wartość, zależna od podanego t.
 */
double KrzyweLissajousaFrame::functionZ(double t) const {
	return _ampZ * sin(_cZ * t + _shiftZ);
}

void KrzyweLissajousaFrame::OnSizeChange(wxSizeEvent& event){
	Repaint();
}

/**
 * @brief Funkcja rysująca krzywe Lissajousa w drawingPanel.
 */
void KrzyweLissajousaFrame::Repaint() {
	// TODO: Implement Repaint

	wxClientDC MyClientDC(drawingPanel);
	wxBufferedDC dc(&MyClientDC, drawingPanel->GetClientSize());

	dc.SetBackground(wxBrush(wxColour(255, 255, 255), wxBRUSHSTYLE_SOLID));
	dc.Clear();

	wxSize panelSize = drawingPanel->GetSize();

/*
	Pomysł na rysowanie:
	Stworzenie dodatkowego wątku, który będzie aktualizawoał drawingPanel co jakiś czas np. 30 razy na sekunde (30fps), poprzez wywoływanie Refresh()
	https://stackoverflow.com/questions/46903244/how-to-run-an-event-while-another-event-is-running-in-wxwidgets-gui
	https://docs.wxwidgets.org/3.0/group__group__class__threading.html
	można dodać przyciski play, stop w których stworzy/usunie się wątek odpowiedzialny za wywoływanie Refresh()

	Lub posłużyć się animacjami??:
	https://youtu.be/nuGpVppgV7c?si=UJqiCyuynRl-TThT&t=61
*/

	// sprawdzenie wyrysowania, bez animacji zależnej od czasu
	
	// TODO: optymalizacja. Przeniesienie obliczania punktów tylko podczas zmiany parametrów
	double* temp_t = new double[_nodes];
	for (int i = 0; i < _nodes; ++i) {
		temp_t[i] = 2.0 * PI * i / static_cast<double>(_nodes);	// 200 punktów w zakresie od 0 do 2*PI
		_data_points[i][0] = functionX(temp_t[i]);
		_data_points[i][1] = functionY(temp_t[i]);
		_data_points[i][2] = functionZ(temp_t[i]);
	}


	double Sx = panelSize.x / 2.0;
	double Sy = panelSize.y / 2.0;
	double Sz = 1.0;
	
	Matrix4d transform_matrix_before_scale, transform_matrix;
	constexpr double z_axis_shift = 22.0;
	// wyznaczenie Sx==Sy aby wykresy nie rozszerzały się, nierównomiernie
	// oraz obliczenie paddingu po lewej i prawej stronie wykresu, aby był rysowany na środku panelu
	int padding;
	if (Sx < Sy) {
		Sy = Sx;
		padding = (panelSize.y - panelSize.x) / 2;
		transform_matrix = macierzTranslacji(0, -padding, 0);
	}
	if (Sx > Sy) {
		Sx = Sy;
		padding = (panelSize.x - panelSize.y) / 2;
		transform_matrix = macierzTranslacji(padding, 0, 0);
	}
	
	// przesunięcie układu do tyłu ekranu (w stronę + osi Z)
	transform_matrix_before_scale = macierzTranslacji(0, 0, z_axis_shift);	
	// obrót wykresu
	transform_matrix_before_scale = transform_matrix_before_scale * macierzObrotuX(_angleX);
	transform_matrix_before_scale = transform_matrix_before_scale * macierzObrotuY(_angleY);
	transform_matrix_before_scale = transform_matrix_before_scale * macierzObrotuZ(_angleZ);

	// przesunięcie środka do lewego-dolnego rogu -> przeskalowanie punktów -> przesunięcie środka na środek drawingPanel
	transform_matrix = transform_matrix * macierzTranslacji(0, panelSize.y, 0) * (macierzSkalowania(Sx, Sy, Sz) * macierzTranslacji(1, -1, 0));
	transform_matrix = transform_matrix * macierzRzutowania3Dna2D(-1.0, 1.0, 1.0, -1.0, 1.0, 21.0);

	// rysowanie odcinków
	double x1, y1, z1, x2, y2, z2;
	dc.SetPen(wxPen(RGB(0, 0, 0)));
	for (int i = 0; i < _nodes - 1; ++i) {
		x1 = -_data_points[i][0]; y1 = _data_points[i][1]; z1 = -_data_points[i][2];
		x2 = -_data_points[i + 1][0]; y2 = _data_points[i + 1][1]; z2 = -_data_points[i + 1][2];

		// TODO: rysowanie punktów lub odcinków w zależności od wyboru użytkownika
		line2d(transform_matrix_before_scale, &x1, &y1, &z1, &x2, &y2, &z2);
		if ((z1 > 1) && (z2 > 1)) {	// zapobiega wyrysowanu odcinków/punktów za ekranem wyświetlania
			line2d(transform_matrix, &x1, &y1, &z1, &x2, &y2, &z2);
			dc.DrawLine(x1, y1, x2, y2);
		}
	}
	// rysowanie odcinków osi
	dc.SetPen(wxPen(RGB(0, 0, 160)));
	for (int i = 0; i < 3; ++i) {
		x1 = -_axis_points[0][0]; y1 = _axis_points[0][1]; z1 = -_axis_points[0][2];
		x2 = -_axis_points[i + 1][0]; y2 = _axis_points[i + 1][1]; z2 = -_axis_points[i + 1][2];

		line2d(transform_matrix_before_scale, &x1, &y1, &z1, &x2, &y2, &z2);
		line2d(transform_matrix, &x1, &y1, &z1, &x2, &y2, &z2);
		dc.DrawLine(x1, y1, x2, y2);
	}
}