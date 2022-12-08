#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	float* analyzeTriangleAngle(int side1, int side2, int side3);
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestangleFunction
{
	TEST_CLASS(TestangleFunction)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
			//equilateral triangle
			int side1 = 5;
			int side2 = 5;
			int side3 = 5;

			float result = 60;

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

			float result_side1 =




		}

	};
}
