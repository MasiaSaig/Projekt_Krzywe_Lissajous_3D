///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.1.0-0-g733bf3d)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/sizer.h>
#include <wx/radiobox.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxPanel* drawingPanel;
		wxStaticText* obrotX_text;
		wxSlider* obrotX_slider;
		wxStaticText* obrotY_text;
		wxSlider* obrotY_slider;
		wxStaticText* obrotZ_text;
		wxSlider* obrotZ_slider;
		wxRadioBox* sposobRysowania_RadioBox;
		wxRadioBox* wspolrzedne_RadioBox;
		wxStaticText* funkcja_x;
		wxStaticText* funkcja_y;
		wxStaticText* funkcja_z;
		wxStaticText* amplitudaX_text;
		wxSlider* amplitudaX_Slider;
		wxStaticText* aX_text;
		wxSlider* aX_slider;
		wxStaticText* katX_text;
		wxSlider* katX_slider;
		wxStaticText* katX_text1;
		wxSlider* katX_slider1;
		wxStaticText* katX_text11;
		wxSlider* katX_slider11;
		wxStaticText* katX_text12;
		wxSlider* katX_slider12;
		wxStaticText* katX_text13;
		wxSlider* katX_slider13;
		wxStaticText* katX_text14;
		wxSlider* katX_slider14;
		wxStaticText* katX_text15;
		wxSlider* katX_slider15;

		// Virtual event handlers, override them in your derived class
		virtual void drawingPanel_onPaint( wxPaintEvent& event ) { event.Skip(); }
		virtual void ObrotX_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void ObrotY_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void ObrotZ_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void sposobRysowania_update( wxCommandEvent& event ) { event.Skip(); }
		virtual void wspolrzedne_update( wxCommandEvent& event ) { event.Skip(); }
		virtual void A_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void a_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void f_a_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void B_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void b_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void f_b_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void C_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void c_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void f_c_update( wxScrollEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 640,528 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

