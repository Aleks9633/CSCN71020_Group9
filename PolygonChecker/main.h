#pragma once
void printWelcome();
int printShapeMenu();
int* getTriangleSides(int* triangleSides);
int* getRectangleSides(int* RectangleSides);
char* polygonPoints(int pointX1, int pointY1, int pointX2, int pointY2, int pointX3, int pointY3, int pointX4, int pointY4, char* stringptr);
char* analyzeTriangle(int side1, int side2, int side3);