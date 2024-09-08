/*
author: syed nadir shah
description: swpping two values
*/
#include <stdio.h>

int main() {
	int val1, val2, temp_var;
	printf("Enter the first integer: ");
	scanf("%d", &val1);
	printf("Enter the second integer: ");
	scanf("%d",&val2);
	printf("\nBefore swapping: \n");
	printf("a = %d\n", val1);
	printf("b = %d\n", val2);
	temp_var = val1;
	val1 = val2;
	val2 = temp_var;
	printf("\nAfter swapping: \n");
	printf("a = %d\n", val1);
	printf("b = %d\n", val2);
	return 0;
}