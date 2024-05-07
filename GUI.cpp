///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
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

	obrotX_text = new wxStaticText( this, wxID_ANY, wxT("Obrót X"), wxDefaultPosition, wxDefaultSize, 0 );
	obrotX_text->Wrap( -1 );
	bSizer202->Add( obrotX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	obrotX_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxSize( -1,-1 ), wxSL_HORIZONTAL );
	bSizer202->Add( obrotX_slider, 1, wxALL, 5 );


	bSizer42->Add( bSizer202, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer201;
	bSizer201 = new wxBoxSizer( wxHORIZONTAL );

	obrotY_text = new wxStaticText( this, wxID_ANY, wxT("Obrót Y"), wxDefaultPosition, wxDefaultSize, 0 );
	obrotY_text->Wrap( -1 );
	bSizer201->Add( obrotY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	obrotY_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer201->Add( obrotY_slider, 1, wxALL, 5 );


	bSizer42->Add( bSizer201, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	obrotZ_text = new wxStaticText( this, wxID_ANY, wxT("Obrót Z"), wxDefaultPosition, wxDefaultSize, 0 );
	obrotZ_text->Wrap( -1 );
	bSizer20->Add( obrotZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	obrotZ_slider = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer20->Add( obrotZ_slider, 1, wxALL, 5 );


	bSizer42->Add( bSizer20, 1, wxEXPAND, 5 );


	bSizer40->Add( bSizer42, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );

	wxString drawingMethod_RadioBoxChoices[] = { wxT("Punkty"), wxT("Odcinki") };
	int drawingMethod_RadioBoxNChoices = sizeof( drawingMethod_RadioBoxChoices ) / sizeof( wxString );
	drawingMethod_RadioBox = new wxRadioBox( this, wxID_ANY, wxT("Sposób rysowania"), wxDefaultPosition, wxDefaultSize, drawingMethod_RadioBoxNChoices, drawingMethod_RadioBoxChoices, 1, wxRA_SPECIFY_COLS );
	drawingMethod_RadioBox->SetSelection( 0 );
	bSizer43->Add( drawingMethod_RadioBox, 0, wxALL, 5 );


	bSizer40->Add( bSizer43, 0, wxALIGN_CENTER|wxSHAPED, 5 );


	bSizer19->Add( bSizer40, 0, wxEXPAND, 5 );


	bSizer1->Add( bSizer19, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxString coordinates_RadioBoxChoices[] = { wxT("(x, y, z)"), wxT("(r, theta, phi)") };
	int coordinates_RadioBoxNChoices = sizeof( coordinates_RadioBoxChoices ) / sizeof( wxString );
	coordinates_RadioBox = new wxRadioBox( this, wxID_ANY, wxT("Współrzędne"), wxDefaultPosition, wxDefaultSize, coordinates_RadioBoxNChoices, coordinates_RadioBoxChoices, 1, wxRA_SPECIFY_COLS );
	coordinates_RadioBox->SetSelection( 1 );
	bSizer2->Add( coordinates_RadioBox, 0, wxALIGN_CENTER|wxALL, 5 );

	function_x = new wxStaticText( this, wxID_ANY, wxT("x(t)=Asin(at+f_a)"), wxDefaultPosition, wxDefaultSize, 0 );
	function_x->Wrap( -1 );
	bSizer2->Add( function_x, 0, wxALL|wxEXPAND, 5 );

	function_y = new wxStaticText( this, wxID_ANY, wxT("y(t)=Bsin(bt+f_b)"), wxDefaultPosition, wxDefaultSize, 0 );
	function_y->Wrap( -1 );
	bSizer2->Add( function_y, 0, wxALL, 5 );

	function_z = new wxStaticText( this, wxID_ANY, wxT("z(t)=Csin(ct+f_c)"), wxDefaultPosition, wxDefaultSize, 0 );
	function_z->Wrap( -1 );
	bSizer2->Add( function_z, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	amplitudeX_text = new wxStaticText( this, wxID_ANY, wxT("A"), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeX_text->Wrap( -1 );
	bSizer3->Add( amplitudeX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudaX_Slider = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer3->Add( amplitudaX_Slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	aX_text = new wxStaticText( this, wxID_ANY, wxT("a"), wxDefaultPosition, wxDefaultSize, 0 );
	aX_text->Wrap( -1 );
	bSizer31->Add( aX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	aX_slider = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31->Add( aX_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxHORIZONTAL );

	shiftX_text = new wxStaticText( this, wxID_ANY, wxT("f"), wxDefaultPosition, wxDefaultSize, 0 );
	shiftX_text->Wrap( -1 );
	bSizer311->Add( shiftX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer311->Add( katX_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer311, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3111;
	bSizer3111 = new wxBoxSizer( wxHORIZONTAL );

	amplitudeY_text = new wxStaticText( this, wxID_ANY, wxT("B"), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeY_text->Wrap( -1 );
	bSizer3111->Add( amplitudeY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider1 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer3111->Add( katX_slider1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer3111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31111;
	bSizer31111 = new wxBoxSizer( wxHORIZONTAL );

	bY_text = new wxStaticText( this, wxID_ANY, wxT("b"), wxDefaultPosition, wxDefaultSize, 0 );
	bY_text->Wrap( -1 );
	bSizer31111->Add( bY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider11 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31111->Add( katX_slider11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31112;
	bSizer31112 = new wxBoxSizer( wxHORIZONTAL );

	shiftY_text = new wxStaticText( this, wxID_ANY, wxT("f"), wxDefaultPosition, wxDefaultSize, 0 );
	shiftY_text->Wrap( -1 );
	bSizer31112->Add( shiftY_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider12 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31112->Add( katX_slider12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31112, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31113;
	bSizer31113 = new wxBoxSizer( wxHORIZONTAL );

	amplitudeZ_text = new wxStaticText( this, wxID_ANY, wxT("C"), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudeZ_text->Wrap( -1 );
	bSizer31113->Add( amplitudeZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider13 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31113->Add( katX_slider13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31113, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31114;
	bSizer31114 = new wxBoxSizer( wxHORIZONTAL );

	cZ_text = new wxStaticText( this, wxID_ANY, wxT("c"), wxDefaultPosition, wxDefaultSize, 0 );
	cZ_text->Wrap( -1 );
	bSizer31114->Add( cZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider14 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31114->Add( katX_slider14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31114, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31115;
	bSizer31115 = new wxBoxSizer( wxHORIZONTAL );

	shiftZ_text = new wxStaticText( this, wxID_ANY, wxT("f"), wxDefaultPosition, wxDefaultSize, 0 );
	shiftZ_text->Wrap( -1 );
	bSizer31115->Add( shiftZ_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider15 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31115->Add( katX_slider15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31115, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	drawingPanel->Connect( wxEVT_PAINT, wxPaintEventHandler( MyFrame1::drawingPanel_onPaint ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	drawingMethod_RadioBox->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::sposobRysowania_update ), NULL, this );
	coordinates_RadioBox->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::coordinates_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	drawingPanel->Disconnect( wxEVT_PAINT, wxPaintEventHandler( MyFrame1::drawingPanel_onPaint ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::rotationX_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::rotationY_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::rotationZ_Update ), NULL, this );
	drawingMethod_RadioBox->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::sposobRysowania_update ), NULL, this );
	coordinates_RadioBox->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::coordinates_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	amplitudaX_Slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::A_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	aX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::f_a_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider1->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::B_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider11->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider12->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::f_b_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider13->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::C_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider14->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );
	katX_slider15->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::f_c_update ), NULL, this );

}
