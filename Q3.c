/*
author: Syed Nadir Shah
description: calculate tax and salary
*/

#include <stdio.h>
//#include<conio.h>
//#include<math.h>
int main(){
	int salary;
	float tax_rate, tax, Net_salary;
	printf("Enter Salary: ");
	scanf("%d",&salary);
	printf("\nEnter Tax rate (current): ");
	scanf("%f",&tax_rate);
	tax = (tax_rate/100)*salary;
	Net_salary = salary - tax;
	printf("\nTotal Tax you have to pay is: %f",tax);
	printf("\nYour Net Salary after paying tax is: %f",Net_salary);
	return 0;
}
