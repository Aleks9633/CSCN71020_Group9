#include "pch.h"
#include "CppUnitTest.h"

extern "C" float* analyzeTriangleAngle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestanalyzeTriangleAngle
{
	TEST_CLASS(TestanalyzeTriangleAngle)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float* Result = analyzeTriangleAngle(10, 14, 15);
			Assert::AreEqual(75, Result[1]);

		}
	};
}
