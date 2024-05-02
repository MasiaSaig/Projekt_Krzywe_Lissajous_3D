#ifndef __KrzyweLissajousaMyFrame1__
#define __KrzyweLissajousaMyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

/** Implementing MyFrame1 */
class KrzyweLissajousaMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void drawingPanel_onPaint( wxPaintEvent& event );
		void ObrotX_Update( wxScrollEvent& event );
		void ObrotY_Update( wxScrollEvent& event );
		void ObrotZ_Update( wxScrollEvent& event );
		void sposobRysowania_update( wxCommandEvent& event );
		void wspolrzedne_update( wxCommandEvent& event );
		void A_update( wxScrollEvent& event );
		void a_update( wxScrollEvent& event );
		void f_a_update( wxScrollEvent& event );
		void B_update( wxScrollEvent& event );
		void b_update( wxScrollEvent& event );
		void f_b_update( wxScrollEvent& event );
		void C_update( wxScrollEvent& event );
		void c_update( wxScrollEvent& event );
		void f_c_update( wxScrollEvent& event );
	public:
		/** Constructor */
		KrzyweLissajousaMyFrame1( wxWindow* parent );
	//// end generated class members


};

#endif // __KrzyweLissajousaMyFrame1__
