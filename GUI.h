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
/// Class Frame
///////////////////////////////////////////////////////////////////////////////
class Frame : public wxFrame
{
	private:

	protected:
		wxPanel* drawingPanel;
		wxStaticText* rotationX_text;
		wxSlider* rotationX_slider;
		wxStaticText* rotationX_value;
		wxStaticText* rotationY_text;
		wxSlider* rotationY_slider;
		wxStaticText* rotationY_value;
		wxStaticText* rotationZ_text;
		wxSlider* rotationZ_slider;
		wxStaticText* rotationZ_value;
		wxRadioBox* drawingMethod_RadioBox;
		wxStaticText* amplitudeX_text;
		wxSlider* amplitudeX_slider;
		wxStaticText* amplitudeX_value;
		wxStaticText* aX_text;
		wxSlider* aX_slider;
		wxStaticText* aX_value;
		wxStaticText* shiftX_text;
		wxSlider* shiftX_slider;
		wxStaticText* shiftX_value;
		wxStaticText* amplitudeY_text;
		wxSlider* amplitudeY_slider;
		wxStaticText* amplitudeY_value;
		wxStaticText* bY_text;
		wxSlider* bY_slider;
		wxStaticText* bY_value;
		wxStaticText* shiftY_text;
		wxSlider* shiftY_slider;
		wxStaticText* shiftY_value;
		wxStaticText* amplitudeZ_text;
		wxSlider* amplitudeZ_slider;
		wxStaticText* amplitudeZ_value;
		wxStaticText* cZ_text;
		wxSlider* cZ_slider;
		wxStaticText* cZ_value;
		wxStaticText* shiftZ_text;
		wxSlider* shiftZ_slider;
		wxStaticText* shiftZ_value;
		wxRadioBox* coordinates_RadioBox;
		wxStaticText* function_x;
		wxStaticText* function_y;
		wxStaticText* function_z;
		wxStaticText* function_r;
		wxStaticText* function_theta;
		wxStaticText* function_phi;
		wxStaticText* m_staticText32;

		// Virtual event handlers, override them in your derived class
		virtual void OnSizeChange( wxSizeEvent& event ) { event.Skip(); }
		virtual void rotationX_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void rotationY_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void rotationZ_Update( wxScrollEvent& event ) { event.Skip(); }
		virtual void sposobRysowania_update( wxCommandEvent& event ) { event.Skip(); }
		virtual void A_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void a_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void f_a_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void B_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void b_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void f_b_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void C_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void c_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void f_c_update( wxScrollEvent& event ) { event.Skip(); }
		virtual void coordinates_update( wxCommandEvent& event ) { event.Skip(); }


	public:

		Frame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 648,747 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Frame();

};

