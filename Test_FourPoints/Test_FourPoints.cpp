#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* polygonPoints(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4, char* stringptr);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestFourPoints
{
	TEST_CLASS(TestpolygonPoints)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* Result = polygonPoints(0,1,0,2,2,1,2,2, "\0");
			Assert::AreEqual("This is a rectangle\n The are and perimeter are: 2.00,and 6", Result);
		}
	};
}
