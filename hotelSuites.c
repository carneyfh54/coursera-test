/***************
Author: Fidel-Hayes Carney
Program: Hotel Suites
Date: 20/11/2023
**********************/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//declaration of variables
	float occupancyRate;
	int occupySuites, totalOccupySuites = 0;
	const int TOTAL_SUITES = 120;
	int floor;
	
	puts("This program computes the occupancy rate of the hotel");
	
	//looping suites for input
	for(floor = 10; floor <= 16; floor++)
	{
		//skipping floor 13
		if(floor == 13)
			continue;
		
		printf("Enter the number of suites occupied in floor %d:", floor);
		scanf ("%d", &occupySuites);
		
		//validation
		while(occupySuites < 0 || occupySuites > 20)
		{
			printf("\nInput not accepeted!\nThe number of suites occupied should be between 0 - 20\n");
			printf("Re-enter the number of suites occupied in floor %d:", floor);
			scanf ("%d", &occupySuites);
		}
		
		//accumulating suites occupied
		totalOccupySuites += occupySuites;
		
	}
	
	//computing Occupancy rate
	occupancyRate = (float)totalOccupySuites / TOTAL_SUITES * 100.0;
	
	//display
	printf("The occupancy rate for the hotel is: %.2f", occupancyRate);
	
	return 0;
}
