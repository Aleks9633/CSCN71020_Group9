#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"
#include "main.h"


float* analyzeTriangleAngle(int side1, int side2, int side3);

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
		result = "Not a triangle";
		return result;
	}
	else if (side1 == side2 && side1 == side3) {

		analyzeTriangleAngle(side1, side2, side3);
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) ||
		(side1 == side3 && side1 != side2) || (side2 == side3 && side1 != side2)) {

		analyzeTriangleAngle(side1, side2, side3);
		result = "Isosceles triangle";
	}
	else {

		analyzeTriangleAngle(side1, side2, side3);
		result = "Scalene triangle";
	}

	return result;
}

float* analyzeTriangleAngle(int side1, int side2, int side3) {

	float angles[3];

	if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {

		angles[0] = -1;
		angles[1] = -1;
		angles[2] = -1;

		return angles;

		printf("it does not form a triangle. invalid input"); //based of triangle inequality theorem if the sides dont add up to form a traingle
	}

	float temp1 = (float)(side1 * side1 + side2 * side2 - (side3 * side3)) / (2 * side1 * side2); //obtaining the angle from sides in the form of radians
	float temp2 = (float)(side2 * side2 + side3 * side3 - (side1 * side1)) / (2 * side2 * side3);
	angles[0] = acos(temp1) * (180 / 3.14159265358979323846); //converting radians into angles
	angles[1] = acos(temp2) * (180 / 3.14159265358979323846);
	angles[2] = 180 - (angles[0] + angles[1]);

	printf("Angle 1 is: %.1f\n Angle 2 is: %.1f\n Angle 3 is: %.1f\n", angles[0], angles[1], angles[2]); //printing output of the angles

	return angles;
}
