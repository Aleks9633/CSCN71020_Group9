#include "pch.h"
#include "CppUnitTest.h"


extern "C" 
{
char* analyzeTriangle(int side1, int side2, int side3);
float* analyzeTriangleAngle(int side1, int side2, int side3);
char* polygonPoints(int, int, int, int, int, int, int, int, char*);
#include <main.h>
#include <point.h>
#include <triangleSolver.h>
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestanalyzeTriangle
{
	TEST_CLASS(TestanalyzeTriangle)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char* Result = analyzeTriangle(1, 3, 3);
			Assert::AreEqual("Isosceles triangle", Result);
		}

		TEST_METHOD(TestMethod2)
		{
			char* Result = analyzeTriangle(3, 3, 3);
			Assert::AreEqual("Equilateral triangle", Result);
		}

		TEST_METHOD(TestMethod3)
		{
			char* Result = analyzeTriangle(5, 7, 8);
			Assert::AreEqual("Scalene triangle", Result);
		}

		TEST_METHOD(TestMethod4)
		{
			char* Result = analyzeTriangle(1, 20, 30);
			Assert::AreEqual("Not a triangle", Result);

		}
	};

	TEST_CLASS(TestangleFunction)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//equilateral triangle
			int side1 = 5;
			int side2 = 5;
			int side3 = 5;

			float result = 60.0;

			float* ActualResult = analyzeTriangleAngle(side1, side2, side3);

			Assert::AreEqual(result, ActualResult[0]);
			Assert::AreEqual(result, ActualResult[1]);
			Assert::AreEqual(result, ActualResult[2]);

		}


		TEST_METHOD(TestMethod2)
		{
			//scalene triangle
			int side1 = 3;
			int side2 = 4;
			int side3 = 5;

			float result_side1 = 90.0;
			float result_side2 = 36.9;
			float result_side3 = 53.1;

			float* ActualResult = analyzeTriangleAngle(side1, side2, side3);

			Assert::AreEqual(result_side1, ActualResult[0]);
			Assert::AreEqual(result_side2, ActualResult[1]);
			Assert::AreEqual(result_side3, ActualResult[2]);



		}

		TEST_METHOD(TestMethod3)
		{
			//isoceles triangle

			int side1 = 3;
			int side2 = 4;
			int side3 = 3;

			float result_side1_3 = 48.18;
			float result_side2 = 83.6;

			float* ActualResult = analyzeTriangleAngle(side1, side2, side3);

			Assert::AreEqual(result_side1_3, ActualResult[0]);
			Assert::AreEqual(result_side2, ActualResult[1]);
			Assert::AreEqual(result_side1_3, ActualResult[2]);

		}

		TEST_METHOD(TestMethod4)
		{
			//invalid inputs/ not a triangle

			int side1 = -1;
			int side2 = 4;
			int side3 = 2;

			float result = -1;

			float* AcutalResult = analyzeTriangleAngle(side1, side2, side3);

			Assert::AreEqual(result, AcutalResult[0]);
			Assert::AreEqual(result, AcutalResult[1]);
			Assert::AreEqual(result, AcutalResult[2]);


		}



	};

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
			char* result = polygonPoints(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
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
			char* result = polygonPoints(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
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
			char* result = polygonPoints(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
			Assert::AreEqual("Not A Rectangle.\n", result);

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
			char* result = polygonPoints(X1, Y1, X2, Y2, X3, Y3, X4, Y4, somestring);
			Assert::AreEqual("Not A Rectangle.\n", result);
		}

	};

}

