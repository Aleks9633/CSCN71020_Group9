#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include "math.h"
#include "main.h"
#include "triangleSolver.h"
#include"point.h"

int side = 0;

int main() {
	char* rectangle = "";
	char string[40] = "";
	char result[40] = "";
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			//float* angles = analyzeTriangleAngle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;
		case 2:
			printf_s("Rectangle Selected.\n");
			int X[4] = { 0, 0, 0, 0 };
			int Y[4] = { 0, 0, 0, 0 };
			int* rectangleSidesPtr = getRectangleSides(X,Y);
			rectangle = polygonPoints(X[0], Y[0], X[1], Y[1], X[2], Y[2], X[3], Y[3], &string);
			break;
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			continueProgram = false; 
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	
	printf_s("0. Exit\n");
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}

int* getRectangleSides(int* X,int* Y) 
{
	int points = (X, Y); //Create points int to return a value 
	for (int i = 0; i < 4; i++)
	{
		printf("Input (X,Y) values:");
		if ((scanf_s("%d %d", &X[i], &Y[i]) != 2) || (X[i] < 0) || (Y[i] < 0)) 
		{
			fprintf(stderr, "invalid input!\n");
			return 0;
		}
	}
	return points;
}