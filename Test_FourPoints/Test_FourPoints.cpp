 #include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "point.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestFourPoints
{
	TEST_CLASS(TestpolygonPoints)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int point1x = 0;
			int point1y = 0;
			int point2x = 0;
			int point2y = 4;
			int point3x = 4;
			int point3y = 0;
			int point4x = 4;
			int point4y = 4;
			char somestring[50] = "";
			char* result = polygonPoints(point1x, point1y, point2x, point2y, point3x, point3y, point4x, point4y, somestring);
			Assert::AreEqual("16.00,and 16", result);

		}
		TEST_METHOD(TestMethod2)
		{
			int point1x = 4;
			int point1y = 10;
			int point2x = 4;
			int point2y = 12;
			int point3x = 8;
			int point3y = 10;
			int point4x = 8;
			int point4y = 12;
			char somestring[50] = "";
			char* result = polygonPoints(point1x, point1y, point2x, point2y, point3x, point3y, point4x, point4y, somestring);
			Assert::AreEqual("8.00,and 12", result);

		}
		TEST_METHOD(TestMethod3)
		{
			int point1x = 1;
			int point1y = 1;
			int point2x = 1;
			int point2y = 1;
			int point3x = 1;
			int point3y = 1;
			int point4x = 1;
			int point4y = 1;
			char somestring[50] = "";
			char* result = polygonPoints(point1x, point1y, point2x, point2y, point3x, point3y, point4x, point4y, somestring);
			Assert::AreEqual("This is not a rectangle.\n", result);

		}
		TEST_METHOD(TestMethod4)
		{
			int point1x = 15;
			int point1y = 7;
			int point2x = 29;
			int point2y = 16;
			int point3x = 0;
			int point3y = 8;
			int point4x = 1;
			int point4y = 1;
			char somestring[50] = "";
			char* result = polygonPoints(point1x, point1y, point2x, point2y, point3x, point3y, point4x, point4y, somestring);
			Assert::AreEqual("This is not a rectangle.\n", result);

		}

	};
}
