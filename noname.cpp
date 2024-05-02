///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

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

	wxString sposobRysowania_RadioBoxChoices[] = { wxT("Punkty"), wxT("Odcinki") };
	int sposobRysowania_RadioBoxNChoices = sizeof( sposobRysowania_RadioBoxChoices ) / sizeof( wxString );
	sposobRysowania_RadioBox = new wxRadioBox( this, wxID_ANY, wxT("Sposób rysowania"), wxDefaultPosition, wxDefaultSize, sposobRysowania_RadioBoxNChoices, sposobRysowania_RadioBoxChoices, 1, wxRA_SPECIFY_COLS );
	sposobRysowania_RadioBox->SetSelection( 1 );
	bSizer43->Add( sposobRysowania_RadioBox, 0, wxALL, 5 );


	bSizer40->Add( bSizer43, 0, wxALIGN_CENTER|wxSHAPED, 5 );


	bSizer19->Add( bSizer40, 0, wxEXPAND, 5 );


	bSizer1->Add( bSizer19, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxString wspolrzedne_RadioBoxChoices[] = { wxT("(x, y, z)"), wxT("(r, theta, phi)") };
	int wspolrzedne_RadioBoxNChoices = sizeof( wspolrzedne_RadioBoxChoices ) / sizeof( wxString );
	wspolrzedne_RadioBox = new wxRadioBox( this, wxID_ANY, wxT("Współrzędne"), wxDefaultPosition, wxDefaultSize, wspolrzedne_RadioBoxNChoices, wspolrzedne_RadioBoxChoices, 1, wxRA_SPECIFY_COLS );
	wspolrzedne_RadioBox->SetSelection( 1 );
	bSizer2->Add( wspolrzedne_RadioBox, 0, wxALIGN_CENTER|wxALL, 5 );

	funkcja_x = new wxStaticText( this, wxID_ANY, wxT("x(t)=Asin(at+f_a)"), wxDefaultPosition, wxDefaultSize, 0 );
	funkcja_x->Wrap( -1 );
	bSizer2->Add( funkcja_x, 0, wxALL|wxEXPAND, 5 );

	funkcja_y = new wxStaticText( this, wxID_ANY, wxT("y(t)=Bsin(bt+f_b)"), wxDefaultPosition, wxDefaultSize, 0 );
	funkcja_y->Wrap( -1 );
	bSizer2->Add( funkcja_y, 0, wxALL, 5 );

	funkcja_z = new wxStaticText( this, wxID_ANY, wxT("z(t)=Csin(ct+f_c)"), wxDefaultPosition, wxDefaultSize, 0 );
	funkcja_z->Wrap( -1 );
	bSizer2->Add( funkcja_z, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	amplitudaX_text = new wxStaticText( this, wxID_ANY, wxT("A  "), wxDefaultPosition, wxDefaultSize, 0 );
	amplitudaX_text->Wrap( -1 );
	bSizer3->Add( amplitudaX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	amplitudaX_Slider = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer3->Add( amplitudaX_Slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	aX_text = new wxStaticText( this, wxID_ANY, wxT("a  "), wxDefaultPosition, wxDefaultSize, 0 );
	aX_text->Wrap( -1 );
	bSizer31->Add( aX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	aX_slider = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31->Add( aX_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxHORIZONTAL );

	katX_text = new wxStaticText( this, wxID_ANY, wxT("f_a"), wxDefaultPosition, wxDefaultSize, 0 );
	katX_text->Wrap( -1 );
	bSizer311->Add( katX_text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer311->Add( katX_slider, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer311, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3111;
	bSizer3111 = new wxBoxSizer( wxHORIZONTAL );

	katX_text1 = new wxStaticText( this, wxID_ANY, wxT("B  "), wxDefaultPosition, wxDefaultSize, 0 );
	katX_text1->Wrap( -1 );
	bSizer3111->Add( katX_text1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider1 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer3111->Add( katX_slider1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer3111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31111;
	bSizer31111 = new wxBoxSizer( wxHORIZONTAL );

	katX_text11 = new wxStaticText( this, wxID_ANY, wxT("b  "), wxDefaultPosition, wxDefaultSize, 0 );
	katX_text11->Wrap( -1 );
	bSizer31111->Add( katX_text11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider11 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31111->Add( katX_slider11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31112;
	bSizer31112 = new wxBoxSizer( wxHORIZONTAL );

	katX_text12 = new wxStaticText( this, wxID_ANY, wxT("f_b"), wxDefaultPosition, wxDefaultSize, 0 );
	katX_text12->Wrap( -1 );
	bSizer31112->Add( katX_text12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider12 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31112->Add( katX_slider12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31112, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31113;
	bSizer31113 = new wxBoxSizer( wxHORIZONTAL );

	katX_text13 = new wxStaticText( this, wxID_ANY, wxT("C  "), wxDefaultPosition, wxDefaultSize, 0 );
	katX_text13->Wrap( -1 );
	bSizer31113->Add( katX_text13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider13 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31113->Add( katX_slider13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31113, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31114;
	bSizer31114 = new wxBoxSizer( wxHORIZONTAL );

	katX_text14 = new wxStaticText( this, wxID_ANY, wxT("c  "), wxDefaultPosition, wxDefaultSize, 0 );
	katX_text14->Wrap( -1 );
	bSizer31114->Add( katX_text14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider14 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31114->Add( katX_slider14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31114, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer31115;
	bSizer31115 = new wxBoxSizer( wxHORIZONTAL );

	katX_text15 = new wxStaticText( this, wxID_ANY, wxT("f_c"), wxDefaultPosition, wxDefaultSize, 0 );
	katX_text15->Wrap( -1 );
	bSizer31115->Add( katX_text15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	katX_slider15 = new wxSlider( this, wxID_ANY, 0, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer31115->Add( katX_slider15, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer2->Add( bSizer31115, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	obrotX_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	sposobRysowania_RadioBox->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::sposobRysowania_update ), NULL, this );
	wspolrzedne_RadioBox->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::wspolrzedne_update ), NULL, this );
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
	obrotX_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotX_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ObrotX_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotY_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ObrotY_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	obrotZ_slider->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ObrotZ_Update ), NULL, this );
	sposobRysowania_RadioBox->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::sposobRysowania_update ), NULL, this );
	wspolrzedne_RadioBox->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::wspolrzedne_update ), NULL, this );
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
