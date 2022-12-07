#include "pch.h"
#include "CppUnitTest.h"

extern "C" float* analyzeTriangleAngle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestangleFunction
{
	TEST_CLASS(TestangleFunction)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            // Add a comment here saying what this test case does
            float* actual = analyzeTriangleAngle(1, 1, 1);

            // We can have several assertion statements to make sure multiple conditions are true
            // in order for the test to pass
            // Here's checking the first index:
            Assert::AreEqual(actual[0], 60.0);

            // And the second index:
            Assert::AreEqual(actual[1], 60.0);

            // And the third:
            Assert::AreEqual(actual[2], 60.0);
        }
	};
}
