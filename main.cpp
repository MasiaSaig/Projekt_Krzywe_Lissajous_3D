#include <wx/wxprec.h>
#include "KrzyweLissajousaFrame.h"

// Mo�liwe ulepszenia:
/*
	- wy�wietlanie dzia�a� matematycznych (pomocne https://github.com/NanoMichael/MicroTeX)
	- animacja wy�wietlania wykres�w
	- animacja wykresu podczas zmiany parametr�w, zamiast rysowanie od nowa
*/

class MyApp : public wxApp {

public:

	virtual bool OnInit();
	virtual int OnExit() { return 0; }

};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	SetProcessDPIAware();
	wxFrame* mainFrame = new KrzyweLissajousaFrame(NULL);
	mainFrame->Show(true);
	SetTopWindow(mainFrame);

	return true;
}
