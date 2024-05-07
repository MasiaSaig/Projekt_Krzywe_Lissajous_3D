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
		wxStaticText* rotationX_text;
		wxSlider* rotationX_slider;
		wxStaticText* rotationY_text;
		wxSlider* rotationY_slider;
		wxStaticText* rotationZ_text;
		wxSlider* rotationZ_slider;
		wxRadioBox* drawingMethod_RadioBox;
		wxRadioBox* coordinates_RadioBox;
		wxStaticText* function_x;
		wxStaticText* function_y;
		wxStaticText* function_z;
		wxStaticText* amplitudeX_text;
		wxSlider* amplitudeX_slider;
		wxStaticText* aX_text;
		wxSlider* aX_slider;
		wxStaticText* shiftX_text;
		wxSlider* shiftX_slider;
		wxStaticText* amplitudeY_text;
		wxSlider* amplitudeY_slider;
		wxStaticText* bY_text;
		wxSlider* bY_slider;
		wxStaticText* shiftY_text;
		wxSlider* shiftY_slider;
		wxStaticText* amplitudeZ_text;
		wxSlider* amplitudeZ_slider;
		wxStaticText* cZ_text;
		wxSlider* cZ_slider;
		wxStaticText* shiftZ_text;
		wxSlider* shiftZ_slider;

		// Virtual event handlers, override them in your derived class
		virtual void drawingPanel_onPaint( wxPaintEvent& event ) { event.Skip(); }
		virtual void rotationX_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void rotationY_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void rotationZ_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void sposobRysowania_update( wxCommandEvent& event ) { event.Skip(); }
		virtual void coordinates_update( wxCommandEvent& event ) { event.Skip(); }
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

