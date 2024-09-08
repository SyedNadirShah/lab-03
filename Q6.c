/*
author: syed nadir shah
description: calculating slope of two points
*/
#include <stdio.h>
int main() {
	float x1 = 5, y1 = 4;
	float x2 = 3, y2 = 2;
	float slope;
	slope = (y2 - y1) / (x2 - x1);
	printf("The slope between the points (5, 4) and (3, 2) is: %.3f\n", slope);
	return 0;
}