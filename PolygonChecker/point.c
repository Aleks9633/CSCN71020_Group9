#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include"point.h"



char* points(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4, char* stringptr)
{
	POINT p1, p2, p3, p4; 
	p1.x = X1; 
	p1.y = Y1;
	p2.x = X2;
	p2.y = Y2;
	p3.x = X3;
	p3.y = Y3;
	p4.x = X4;
	p4.y = Y4;

	char* result = "";
	int perimeter = 0;
	double area = 0;
	char areastring[50] = "";
	char perimeterstring[50] = "";
	int delta12x = abs(p1.x - p2.x);
	int delta12y = abs(p1.y - p2.y);
	int delta34x = abs(p3.x - p4.x);
	int delta34y = abs(p3.y - p4.y);
	int delta13x = abs(p1.x - p3.x);
	int delta13y = abs(p1.y - p3.y);
	int delta24x = abs(p2.x - p4.x);
	int delta24y = abs(p2.y - p4.y);
	double slope12 = 0;
	double slope13 = 0;
	double slope24 = 0;
	double slope34 = 0;
	double distance12 = 0;
	double distance34 = 0;
	double distance13 = 0;
	double distance24 = 0;

	if (delta12x != 0) 
	{
		slope12 = (double)delta12y / (double)delta12x; 
	}
	else
	{
		slope12 = 0;
	}
	if (delta13x != 0)
	{

		slope13 = (double)delta13y / (double)delta13x;
	}
	else
	{
		slope13 = 0;
	}
	if (delta24x != 0)
	{
		slope24 = (double)delta24y / (double)delta24x;
	}
	else
	{
		slope24 = 0;
	}
	if (delta34x != 0)
	{
		slope34 = (double)delta34y / (double)delta34x;
	}
	else
	{
		slope34 = 0;
	}
	distance12 = sqrt(pow(((double)p1.x - (double)p2.x), 2) + (pow(((double)p1.y - (double)p2.y), 2))); 
	distance34 = sqrt(pow(((double)p3.x - (double)p4.x), 2) + (pow(((double)p3.y - (double)p4.y), 2)));
	distance13 = sqrt(pow(((double)p1.x - (double)p3.x), 2) + (pow(((double)p1.y - (double)p3.y), 2)));
	distance24 = sqrt(pow(((double)p2.x - (double)p4.x), 2) + (pow(((double)p2.y - (double)p4.y), 2)));

	if (slope12 == slope34 && slope13 == slope24 && distance12 == distance34 && distance13 == distance24 && distance12 > 0 && distance13 > 0 && distance24 > 0 && distance34 > 0)
	{
		perimeter = distance12 + distance13 + distance24 + distance34; 
		area = (double)distance12 * (double)distance24; 
		printf("This is a rectangle\n"); 
		snprintf(areastring, 50, "%.2f", area);
		strcpy(stringptr, areastring);
		strcat(stringptr, ",");
		strcat(stringptr, "and ");
		snprintf(perimeterstring, 50, "%d", perimeter);
		strcat(stringptr, perimeterstring);
		result = stringptr;
		printf("The area and perimeter are: %s", result);
		return result; 

	}
	else
	{
		printf("Not A Rectangle\n");
		result = "Not A Rectangle.\n";
	}
}