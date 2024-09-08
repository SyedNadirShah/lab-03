/*
author: syed nadir shah
description: calculating total consumed amount of fuel and its price
*/
#include <stdio.h>
int main() {
	float fuel_avg, total_distance = 1207 * 2;
	float price_forward = 118.0, price_return = 123.0;
	float fuel_forward, fuel_return, total_fuel, total_cost;
	do {
		printf("Enter the car's fuel average (KM per liter, must be positive): ");
		scanf("%f", &fuel_avg);
		if (fuel_avg <= 0) {
			printf("Error: Fuel average must be a positive value.\n");
		}
	} while (fuel_avg <= 0);
	fuel_forward = 1207 / fuel_avg;
	fuel_return = 1207 / fuel_avg;
	total_fuel = fuel_forward + fuel_return;
	total_cost = (fuel_forward * price_forward) + (fuel_return * price_return);
	printf("\nTotal fuel consumed for the trip (both ways): %f liters\n", total_fuel);
	printf("Total fuel cost for the trip (both ways): %f\n", total_cost);
	return 0;
}