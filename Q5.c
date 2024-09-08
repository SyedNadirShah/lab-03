/*
author: syed nadir shah
description: 
*/
#include <stdio.h>
int main() {
	float principal, rate, time, simple_interest;
	do {
		printf("Enter the prncipal amount (between Rs. 100 to Rs. 1,000,000): ");
		scanf("%f", &principal);

		if (principal < 100 || principal > 1000000) {
			printf("Error: Princopal must be between Rs. 100 and Rs. 1,000,000.\n");
		}
	} while (principal < 100 || principal > 1000000);
	do {
		printf("Enter the rate of interest (between 5%% to 10%%): ");
		scanf("%f", &rate);
		if (rate < 5 || rate > 10) {
			printf("Error: Rate of interest must be between 5%% and 10%%.\n");
		}
	} while (rate < 5 || rate > 10);
	do {
		printf("Enter the time piriod (in years, between 1 to 10): ");
		scanf("%f", &time);
		if (time < 1 || time > 10 ) {
			printf("Error: Time piriod must be between 1 and 10 years.\n");
		}
	} while (time < 1 || time > 10);
	simple_interest = (principal * rate * time) / 100;
	printf("\nThe Simple Interest is: %f\n", simple_interest);
	return 0;
}