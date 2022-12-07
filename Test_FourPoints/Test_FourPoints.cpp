#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "point.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestFourPoints
{
	TEST_CLASS(TestFourPoints)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int X1 = 0;
			int Y1 = 0;
			int X2 = 0;
			int Y2 = 4;
			int X3 = 4;
			int Y3 = 0;
			int X4 = 4;
			int Y4 = 4;
			char somestring[50] = "";
			char* result = point(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
			Assert::AreEqual("16.00,and 16", result);

		}
		TEST_METHOD(TestMethod2)
		{
			int X1 = 4;
			int Y1 = 10;
			int X2 = 4;
			int Y2 = 12;
			int X3 = 8;
			int Y3 = 10;
			int X4 = 8;
			int Y4 = 12;
			char somestring[50] = "";
			char* result = point(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
			Assert::AreEqual("8.00,and 12", result);

		}
		TEST_METHOD(TestMethod3)
		{
			int X1 = 1;
			int Y1 = 1;
			int X2 = 1;
			int Y2 = 1;
			int X3 = 1;
			int Y3 = 1;
			int X4 = 1;
			int Y4 = 1;
			char somestring[50] = "";
			char* result = point(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
			Assert::AreEqual("This is not a rectangle.\n", result);

		}
		TEST_METHOD(TestMethod4)
		{
			int X1 = 15;
			int Y1 = 7;
			int X2 = 29;
			int Y2 = 16;
			int X3 = 0;
			int Y3 = 8;
			int X4 = 1;
			int Y4 = 1;
			char somestring[50] = "";
			char* result = point(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
			Assert::AreEqual("Not A Rectangle!\n", result);
		}

	};
}
