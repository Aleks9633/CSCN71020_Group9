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
            float* angles = analyzeTriangleAngle(1, 1, 1);

            // We can have several assertion statements to make sure multiple conditions are true
            // in order for the test to pass
            // Here's checking the first index:
            Assert::AreEqual(angles[0], 60.0);

            // And the second index:
            Assert::AreEqual(angles[1], 60.0);

            // And the third:
            Assert::AreEqual(angles[2], 60.0);
        }
	};
}
