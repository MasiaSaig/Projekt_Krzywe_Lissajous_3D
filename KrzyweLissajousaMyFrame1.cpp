#include "KrzyweLissajousaMyFrame1.h"

KrzyweLissajousaMyFrame1::KrzyweLissajousaMyFrame1(wxWindow* parent)
	: _coordinates{ false }, _drawingMethod{ false },
	MyFrame1(parent)
{
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
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość kąta obrotu osi OX, który przyjmuje wartości(int) od 0 do 360.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::rotationX_Update(wxScrollEvent& event){
	// zmiana kąta od 0 do 360
	_angleX = rotationX_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość kąta obrotu osi OY, który przyjmuje wartości(int) od 0 do 360.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::rotationY_Update(wxScrollEvent& event){
	// zmiana kąta od 0 do 360
	_angleY = rotationY_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość kąta obrotu osi OZ, który przyjmuje wartości(int) od 0 do 360.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::rotationZ_Update(wxScrollEvent& event){
	// zmiana kąta od 0 do 360
	_angleZ = rotationZ_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany sposobu rysowania, która aktualizuje wartość metody rysowania(bool) 0 - punkty, 1 - odcinki.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::sposobRysowania_update(wxCommandEvent& event){
	_drawingMethod = !_drawingMethod;
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany współrzędnych, która aktualizuje tekst wyświetlanych wzorów u góry po prawej oraz wartość używanych współrzędnych(bool) 0 - (x,y,z), 1 - (r, theta, phi).
 * @param event 
 */
void KrzyweLissajousaMyFrame1::coordinates_update(wxCommandEvent& event){
	if (coordinates_RadioBox->GetSelection() == 0) {
		function_x->SetLabel(L"x(t)=Asin(at+\u03b1)");
		function_y->SetLabel(L"y(t)=Bsin(bt+\u03b2)");
		function_z->SetLabel(L"z(t)=Csin(ct+\u03b3)");
	}
	else {
		function_x->SetLabel(L"r(t)=Asin(at+\u03b1)");
		function_y->SetLabel(L"\u03b8(t)=Bsin(bt+\u03b2)");
		function_z->SetLabel(L"\u03c6(t)=Csin(ct+\u03b3)");
	}
	_coordinates = !_coordinates;
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość amplitudy A(double) od 0.0 do 10.0.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::A_update(wxScrollEvent& event){
	// zmiana amplitudy A od 0 do 10.0 (double)
	_ampX = amplitudeX_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość a(int) od 0 do 20.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::a_update(wxScrollEvent& event){
	// zmiana a od 0 do 20 (int)
	_aX = aX_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość przesunięcia funkcji x(t) (int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaMyFrame1::f_a_update(wxScrollEvent& event){
	// zmiana kąta od 0 do 360 (int)
	_shiftX = shiftX_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość amplitudy B(double) od 0.0 do 10.0.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::B_update(wxScrollEvent& event){
	// zmiana amplitudy B od 0 do 10.0 (double)
	_ampY = amplitudeY_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość b(int) od 0 do 20.
 * @param event
 */
void KrzyweLissajousaMyFrame1::b_update(wxScrollEvent& event){
	// zmiana b od 0 do 20 (int)
	_bY = bY_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość przesunięcia funkcji y(t) (int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaMyFrame1::f_b_update(wxScrollEvent& event){
	// zmiana kąta od 0 do 360 (int)
	_shiftY = shiftY_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość amplitudy C(double) od 0.0 do 10.0.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::C_update(wxScrollEvent& event){
	// zmiana amplitudy C od 0 do 10.0 (double)
	_ampZ = amplitudeZ_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość c(int) od 0 do 20.
 * @param event
 */
void KrzyweLissajousaMyFrame1::c_update(wxScrollEvent& event){
	// zmiana c od 0 do 20 (int)
	_cZ = cZ_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja wywoływana podczas zmiany pozycji suwaka, która aktualizuje wartość przesunięcia funkcji z(t) (int) od 0 do 360.
 * @param event
 */
void KrzyweLissajousaMyFrame1::f_c_update(wxScrollEvent& event){
	// zmiana kąta od 0 do 360 (int)
	_shiftZ = shiftZ_slider->GetValue();
	Refresh();
}

/**
 * @brief Funkcja rysująca krzywe Lissajousa w drawingPanel.
 * @param event 
 */
void KrzyweLissajousaMyFrame1::drawingPanel_onPaint(wxPaintEvent& event)
{
	// TODO: Implement drawingPanel_onPaint
	// używa się Refresh() aby zaaktualizować/wywołać onPaint event, który uruchamia tą metodę/funkcję
	wxPaintDC dc(drawingPanel);
	dc.SetBackground(wxBrush(wxColour(255, 255, 255), wxBRUSHSTYLE_SOLID));
	dc.Clear();


	/*
		Pomysł na rysowanie:
		Stworzenie dodatkowego wątku, który będzie aktualizawoał drawingPanel co jakiś czas np. 30 razy na sekunde (30fps), poprzez wywoływanie Refresh()
		https://stackoverflow.com/questions/46903244/how-to-run-an-event-while-another-event-is-running-in-wxwidgets-gui
		https://docs.wxwidgets.org/3.0/group__group__class__threading.html
		można dodać przyciski play, stop w których stworzy/usunie się wątek odpowiedzialny za wywoływanie Refresh()

		Lub posłużyć się animacjami??:
		https://youtu.be/nuGpVppgV7c?si=UJqiCyuynRl-TThT&t=61
	*/

}