///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

Frame::Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	drawingPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer19->Add( drawingPanel, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer202;
	bSizer202 = new wxBoxSizer( wxHORIZONTAL );

	rotationX_text = new wxStaticText( this, wxID_ANY, wxT("Obrót X"), wxDefaultPosition, wxDefaultSize, 0 );
	rotationX_text->Wrap( -1 );
	bSizer202->Add( rotationX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	rotationX_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxSize( -1,-1 ), wxSL_HORIZONTAL );
	bSizer202->Add( rotationX_slider, 1, wxALL, 5 );

	rotationX_value = new wxStaticText( this, wxID_ANY, wxT("0  "), wxDefaultPosition, wxDefaultSize, 0 );
	rotationX_value->Wrap( -1 );
	bSizer202->Add( rotationX_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer42->Add( bSizer202, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer201;
	bSizer201 = new wxBoxSizer( wxHORIZONTAL );

	rotationY_text = new wxStaticText( this, wxID_ANY, wxT("Obrót Y"), wxDefaultPosition, wxDefaultSize, 0 );
	rotationY_text->Wrap( -1 );
	bSizer201->Add( rotationY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	rotationY_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer201->Add( rotationY_slider, 1, wxALL, 5 );

	rotationY_value = new wxStaticText( this, wxID_ANY, wxT("0  "), wxDefaultPosition, wxDefaultSize, 0 );
	rotationY_value->Wrap( -1 );
	bSizer201->Add( rotationY_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer42->Add( bSizer201, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	rotationZ_text = new wxStaticText( this, wxID_ANY, wxT("Obrót Z"), wxDefaultPosition, wxDefaultSize, 0 );
	rotationZ_text->Wrap( -1 );
	bSizer20->Add( rotationZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	rotationZ_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer20->Add( rotationZ_slider, 1, wxALL, 5 );

	rotationZ_value = new wxStaticText( this, wxID_ANY, wxT("0  "), wxDefaultPosition, wxDefaultSize, 0 );
	rotationZ_value->Wrap( -1 );
	bSizer20->Add( rotationZ_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer42->Add( bSizer20, 1, wxEXPAND, 5 );


	bSizer40->Add( bSizer42, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );

	wxString drawingMethod_RadioBoxChoices[] = { wxT("Punkty"), wxT("Odcinki") };
	int drawingMethod_RadioBoxNChoices = sizeof( drawingMethod_RadioBoxChoices ) / sizeof( wxString );
	drawingMethod_RadioBox = new wxRadioBox( this, wxID_ANY, wxT("Sposób rysowania"), wxDefaultPosition, wxDefaultSize, drawingMethod_RadioBoxNChoices, drawingMethod_RadioBoxChoices, 1, wxRA_SPECIFY_COLS );
	drawingMethod_RadioBox->SetSelection( 1 );
	bSizer43->Add( drawingMethod_RadioBox, 0, wxALL, 5 );


	bSizer40->Add( bSizer43, 0, wxALIGN_CENTER|wxSHAPED, 5 );


	bSizer19->Add( bSizer40, 0, wxEXPAND, 5 );


	bSizer1->Add( bSizer19, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxString coordinates_RadioBoxChoices[] = { wxT("(x, y, z)"), wxT("(r, theta, phi)") };
	int coordinates_RadioBoxNChoices = sizeof( coordinates_RadioBoxChoices ) / sizeof( wxString );
	coordinates_RadioBox = new wxRadioBox( this, wxID_ANY, wxT("Współrzędne"), wxDefaultPosition, wxDefaultSize, coordinates_RadioBoxNChoices, coordinates_RadioBoxChoices, 1, wxRA_SPECIFY_COLS );
	coordinates_RadioBox->SetSelection( 0 );
	bSizer2->Add( coordinates_RadioBox, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer191;
	bSizer191 = new wxBoxSizer( wxVERTICAL );

	function_x = new wxStaticText( this, wxID_ANY, wxT("x(t)=Asin(at+f_a)"), wxDefaultPosition, wxDefaultSize, 0 );
	function_x->Wrap( -1 );
	bSizer191->Add( function_x, 0, wxALL, 5 );

	function_y = new wxStaticText( this, wxID_ANY, wxT("y(t)=Bsin(bt+f_b)"), wxDefaultPosition, wxDefaultSize, 0 );
	function_y->Wrap( -1 );
	bSizer191->Add( function_y, 0, wxALL, 5 );

	function_z = new wxStaticText( this, wxID_ANY, wxT("z(t)=Csin(ct+f_c)"), wxDefaultPosition, wxDefaultSize, 0 );
	function_z->Wrap( -1 );
	bSizer191->Add( function_z, 0, wxALL, 5 );


	bSizer2->Add( bSizer191, 1, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	amplitudeX_text = new wxStaticText( this, wxID_ANY, wxT("A"), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeX_text->Wrap( -1 );
	bSizer3->Add( amplitudeX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudeX_slider = new wxSlider( this, wxID_ANY, 10, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer3->Add( amplitudeX_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudeX_value = new wxStaticText( this, wxID_ANY, wxT("1     "), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeX_value->Wrap( -1 );
	bSizer3->Add( amplitudeX_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	aX_text = new wxStaticText( this, wxID_ANY, wxT("a"), wxDefaultPosition, wxDefaultSize, 0 );
	aX_text->Wrap( -1 );
	bSizer31->Add( aX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	aX_slider = new wxSlider( this, wxID_ANY, 1, 0, 20, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31->Add( aX_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	aX_value = new wxStaticText( this, wxID_ANY, wxT("1  "), wxDefaultPosition, wxDefaultSize, 0 );
	aX_value->Wrap( -1 );
	bSizer31->Add( aX_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxHORIZONTAL );

	shiftX_text = new wxStaticText( this, wxID_ANY, wxT("f"), wxDefaultPosition, wxDefaultSize, 0 );
	shiftX_text->Wrap( -1 );
	bSizer311->Add( shiftX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	shiftX_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer311->Add( shiftX_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	shiftX_value = new wxStaticText( this, wxID_ANY, wxT("0  "), wxDefaultPosition, wxDefaultSize, 0 );
	shiftX_value->Wrap( -1 );
	bSizer311->Add( shiftX_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer311, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3111;
	bSizer3111 = new wxBoxSizer( wxHORIZONTAL );

	amplitudeY_text = new wxStaticText( this, wxID_ANY, wxT("B"), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeY_text->Wrap( -1 );
	bSizer3111->Add( amplitudeY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudeY_slider = new wxSlider( this, wxID_ANY, 10, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer3111->Add( amplitudeY_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudeY_value = new wxStaticText( this, wxID_ANY, wxT("1  "), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeY_value->Wrap( -1 );
	bSizer3111->Add( amplitudeY_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer3111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31111;
	bSizer31111 = new wxBoxSizer( wxHORIZONTAL );

	bY_text = new wxStaticText( this, wxID_ANY, wxT("b"), wxDefaultPosition, wxDefaultSize, 0 );
	bY_text->Wrap( -1 );
	bSizer31111->Add( bY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	bY_slider = new wxSlider( this, wxID_ANY, 1, 0, 20, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31111->Add( bY_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	bY_value = new wxStaticText( this, wxID_ANY, wxT("1  "), wxDefaultPosition, wxDefaultSize, 0 );
	bY_value->Wrap( -1 );
	bSizer31111->Add( bY_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31112;
	bSizer31112 = new wxBoxSizer( wxHORIZONTAL );

	shiftY_text = new wxStaticText( this, wxID_ANY, wxT("f"), wxDefaultPosition, wxDefaultSize, 0 );
	shiftY_text->Wrap( -1 );
	bSizer31112->Add( shiftY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	shiftY_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31112->Add( shiftY_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	shiftY_value = new wxStaticText( this, wxID_ANY, wxT("0  "), wxDefaultPosition, wxDefaultSize, 0 );
	shiftY_value->Wrap( -1 );
	bSizer31112->Add( shiftY_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31112, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31113;
	bSizer31113 = new wxBoxSizer( wxHORIZONTAL );

	amplitudeZ_text = new wxStaticText( this, wxID_ANY, wxT("C"), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeZ_text->Wrap( -1 );
	bSizer31113->Add( amplitudeZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudeZ_slider = new wxSlider( this, wxID_ANY, 10, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31113->Add( amplitudeZ_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudeZ_value = new wxStaticText( this, wxID_ANY, wxT("1  "), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeZ_value->Wrap( -1 );
	bSizer31113->Add( amplitudeZ_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31113, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31114;
	bSizer31114 = new wxBoxSizer( wxHORIZONTAL );

	cZ_text = new wxStaticText( this, wxID_ANY, wxT("c"), wxDefaultPosition, wxDefaultSize, 0 );
	cZ_text->Wrap( -1 );
	bSizer31114->Add( cZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	cZ_slider = new wxSlider( this, wxID_ANY, 1, 0, 20, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31114->Add( cZ_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	cZ_value = new wxStaticText( this, wxID_ANY, wxT("1  "), wxDefaultPosition, wxDefaultSize, 0 );
	cZ_value->Wrap( -1 );
	bSizer31114->Add( cZ_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31114, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31115;
	bSizer31115 = new wxBoxSizer( wxHORIZONTAL );

	shiftZ_text = new wxStaticText( this, wxID_ANY, wxT("f"), wxDefaultPosition, wxDefaultSize, 0 );
	shiftZ_text->Wrap( -1 );
	bSizer31115->Add( shiftZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	shiftZ_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31115->Add( shiftZ_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	shiftZ_value = new wxStaticText( this, wxID_ANY, wxT("0  "), wxDefaultPosition, wxDefaultSize, 0 );
	shiftZ_value->Wrap( -1 );
	bSizer31115->Add( shiftZ_value, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31115, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	drawingPanel->Connect( wxEVT_PAINT, wxPaintEventHandler( Frame::drawingPanel_onPaint ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	drawingMethod_RadioBox->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( Frame::sposobRysowania_update ), NULL, this );
	coordinates_RadioBox->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( Frame::coordinates_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::A_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::B_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::C_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
}

Frame::~Frame()
{
	// Disconnect Events
	drawingPanel->Disconnect( wxEVT_PAINT, wxPaintEventHandler( Frame::drawingPanel_onPaint ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::rotationX_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationY_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::rotationY_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	rotationZ_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::rotationZ_Update ), NULL, this );
	drawingMethod_RadioBox->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( Frame::sposobRysowania_update ), NULL, this );
	coordinates_RadioBox->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( Frame::coordinates_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::A_update ), NULL, this );
	amplitudeX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::A_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	shiftX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::f_a_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::B_update ), NULL, this );
	amplitudeY_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::B_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::b_update ), NULL, this );
	bY_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	shiftY_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::f_b_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::C_update ), NULL, this );
	amplitudeZ_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::C_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::c_update ), NULL, this );
	cZ_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( Frame::f_c_update ), NULL, this );
	shiftZ_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( Frame::f_c_update ), NULL, this );

}
