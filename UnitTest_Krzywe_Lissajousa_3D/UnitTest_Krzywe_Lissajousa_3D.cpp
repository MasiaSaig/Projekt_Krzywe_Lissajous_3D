#include "pch.h"
#include "CppUnitTest.h"
#include "../Point3D.h"
#include "../KrzyweLissajousaFrame.h"
#include "../../../Libraries/wxWidgets-3.2.4.7/include/wx/wxprec.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestKrzyweLissajousa3D
{
	TEST_CLASS(UnitTestKrzyweLissajousa3D)
	{
	public:
		
		TEST_METHOD_INITIALIZE(calcSphericalPoint3D)
		{
			Point3D point;
			wxFrame mainFrame = KrzyweLissajousaFrame(NULL);
			KrzyweLissajousaFrame frame();
			point = frame.calcSphericalPoint3D(2 * 3.14);
		}
	};
}
