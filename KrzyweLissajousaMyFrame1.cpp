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

void KrzyweLissajousaMyFrame1::drawingPanel_onPaint(wxPaintEvent& event)
{
	// TODO: Implement drawingPanel_onPaint
	// używa się Refresh() aby zaaktualizować/wywołać onPaint event, który uruchamia tą metodę/funkcję
	wxPaintDC dc(drawingPanel);
	dc.SetBackground(wxBrush(wxColour(255, 255, 255), wxBRUSHSTYLE_SOLID));
	dc.Clear();
	
// jakiś przykladowy kod z przykladu wxWidgets 07 na Upel
	/*
	MyDC.SetFont(wxFont(10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, WxChoice1->GetString(WxChoice1->GetSelection())));
	MyDC.DrawText("Przykładowy tekst (blabla)", 20, 70);
	MyDC.SetTextForeground(wxColor(255, 0, 0));
	MyDC.DrawText("Kolorowy text", 20, 90);
	MyDC.SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, true, WxChoice1->GetString(WxChoice1->GetSelection())));
	MyDC.DrawText("Przykładowy tekst pogrubiony", 20, 130);
	MyDC.SetFont(wxFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false, WxChoice1->GetString(WxChoice1->GetSelection())));
	MyDC.SetTextForeground(wxColor(0, 0, 255));
	MyDC.DrawText("Przykładowy tekst pochyły", 20, 170);
	*/
}

void KrzyweLissajousaMyFrame1::rotationX_Update(wxScrollEvent& event)
{
	// zmiana kąta od 0 do 360
	_angleX = rotationX_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::rotationY_Update(wxScrollEvent& event)
{
	// zmiana kąta od 0 do 360
	_angleY = rotationY_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::rotationZ_Update(wxScrollEvent& event)
{
	// zmiana kąta od 0 do 360
	_angleZ = rotationZ_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::sposobRysowania_update(wxCommandEvent& event)
{
	/*if (drawingMethod_RadioBox->GetSelection() == 0){
		_drawingMethod = 0;
	}else {
		_drawingMethod = 1;
	}*/
	_drawingMethod = !_drawingMethod;
	Refresh();
}

void KrzyweLissajousaMyFrame1::coordinates_update(wxCommandEvent& event)
{
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

void KrzyweLissajousaMyFrame1::A_update(wxScrollEvent& event)
{
	// TODO: Implement A_update
	// zmiana amplitudy A od 0 do 10.0 (double)
	_ampX = amplitudeX_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::a_update(wxScrollEvent& event)
{
	// TODO: Implement a_update
	// zmiana a od 0 do 20 (int)
	_aX = aX_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::f_a_update(wxScrollEvent& event)
{
	// TODO: Implement f_a_update
	// zmiana kąta od 0 do 360 (int)
	_shiftX = shiftX_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::B_update(wxScrollEvent& event)
{
	// TODO: Implement B_update
	// zmiana amplitudy B od 0 do 10.0 (double)
	_ampY = amplitudeY_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::b_update(wxScrollEvent& event)
{
	// TODO: Implement b_update
	// zmiana b od 0 do 20 (int)
	_bY = bY_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::f_b_update(wxScrollEvent& event)
{
	// TODO: Implement f_b_update
	// zmiana kąta od 0 do 360 (int)
	_shiftY = shiftY_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::C_update(wxScrollEvent& event)
{
	// TODO: Implement C_update
	// zmiana amplitudy C od 0 do 10.0 (double)
	_ampZ = amplitudeZ_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::c_update(wxScrollEvent& event)
{
	// TODO: Implement c_update
	// zmiana c od 0 do 20 (int)
	_cZ = cZ_slider->GetValue();
	Refresh();
}

void KrzyweLissajousaMyFrame1::f_c_update(wxScrollEvent& event)
{
	// TODO: Implement f_c_update
	// zmiana kąta od 0 do 360 (int)
	_shiftZ = shiftZ_slider->GetValue();
	Refresh();
}
