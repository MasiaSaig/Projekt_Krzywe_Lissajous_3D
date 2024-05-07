#include "KrzyweLissajousaMyFrame1.h"

KrzyweLissajousaMyFrame1::KrzyweLissajousaMyFrame1( wxWindow* parent )
: _coordinates{false}, _drawingStyle{false},
MyFrame1( parent )
{
	SetMinSize({625, 650});
	this->SetBackgroundColour(wxColor(192, 192, 192));

	// przypisanie napisów z kodami unicode, etykietom(static text)
	coordinates_RadioBox->SetLabel(L"Wsp\u00f3rz\u0119dne");
	drawingMethod_RadioBox->SetLabel(L"Spos\u00f3b rysowania");
	obrotX_text->SetLabel(L"Obr\u00f3t X");
	obrotY_text->SetLabel(L"Obr\u00f3t Y");
	obrotZ_text->SetLabel(L"Obr\u00f3t Z");
	function_x->SetLabel(L"x(t)=Asin(at+\u03b1)");
	function_y->SetLabel(L"y(t)=Bsin(bt+\u03B2)");
	function_z->SetLabel(L"z(t)=Csin(ct+\u03B3)");
	shiftX_text->SetLabel(L"\u03B1");
	shiftY_text->SetLabel(L"\u03B2");
	shiftZ_text->SetLabel(L"\u03B3");

	coordinates_RadioBox->SetString(1,L"(r, \u03b8, \u03c6)");
	coordinates_RadioBox->SetSelection(0);	// ponownie wybiera (x,y,z)
}

void KrzyweLissajousaMyFrame1::drawingPanel_onPaint( wxPaintEvent& event )
{
// TODO: Implement drawingPanel_onPaint
// używa się Refresh() aby zaaktualizować/wywołać onPaint event, który uruchamia tą metodę/funkcję
wxPaintDC dc(drawingPanel);
dc.SetBackground(wxBrush(wxColour(255, 255, 255), wxBRUSHSTYLE_SOLID));
dc.Clear();

/*
idk jakiś przykladowy kod z przykladu wxWidgets 07 na Upel'u

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

void KrzyweLissajousaMyFrame1::rotationX_Update( wxScrollEvent& event )
{
// TODO: Implement rotationX_Update
}

void KrzyweLissajousaMyFrame1::rotationY_Update( wxScrollEvent& event )
{
// TODO: Implement rotationY_Update
}

void KrzyweLissajousaMyFrame1::rotationZ_Update( wxScrollEvent& event )
{
// TODO: Implement rotationZ_Update
}

void KrzyweLissajousaMyFrame1::sposobRysowania_update( wxCommandEvent& event )
{
// TODO: Implement sposobRysowania_update
}

void KrzyweLissajousaMyFrame1::coordinates_update( wxCommandEvent& event )
{
// TODO: Implement coordinates_update
if (coordinates_RadioBox->GetSelection() == 0) {
function_x->SetLabel(L"x(t)=Asin(at+\u03b1)");
function_y->SetLabel(L"y(t)=Bsin(bt+\u03b2)");
function_z->SetLabel(L"z(t)=Csin(ct+\u03b3)");
_coordinates = false;
}
else {
function_x->SetLabel(L"r(t)=Asin(at+\u03b1)");
function_y->SetLabel(L"\u03b8(t)=Bsin(bt+\u03b2)");
function_z->SetLabel(L"\u03c6(t)=Csin(ct+\u03b3)");
_coordinates = true;
}
}

void KrzyweLissajousaMyFrame1::A_update( wxScrollEvent& event )
{
// TODO: Implement A_update
}

void KrzyweLissajousaMyFrame1::a_update( wxScrollEvent& event )
{
// TODO: Implement a_update
}

void KrzyweLissajousaMyFrame1::f_a_update( wxScrollEvent& event )
{
// TODO: Implement f_a_update
}

void KrzyweLissajousaMyFrame1::B_update( wxScrollEvent& event )
{
// TODO: Implement B_update
}

void KrzyweLissajousaMyFrame1::b_update( wxScrollEvent& event )
{
// TODO: Implement b_update
}

void KrzyweLissajousaMyFrame1::f_b_update( wxScrollEvent& event )
{
// TODO: Implement f_b_update
}

void KrzyweLissajousaMyFrame1::C_update( wxScrollEvent& event )
{
// TODO: Implement C_update
}

void KrzyweLissajousaMyFrame1::c_update( wxScrollEvent& event )
{
// TODO: Implement c_update
}

void KrzyweLissajousaMyFrame1::f_c_update( wxScrollEvent& event )
{
// TODO: Implement f_c_update
}
