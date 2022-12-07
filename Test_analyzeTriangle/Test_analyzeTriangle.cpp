#include "pch.h"
#include "CppUnitTest.h"


extern "C" {
	char* analyzeTriangle(int side1, int side2, int side3);
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
}

