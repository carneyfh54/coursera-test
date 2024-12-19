/* 
Fidel-Hayes Carney
*/

#include <stdio.h>
#include <stdlib.h>
#define MONKEY 3
#define DAYS 7

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int monkeyFood[MONKEY][DAYS];
	int least, greatest;
	
	//inputs
	printf("Get ready to enter the food eaten by the monkey per each day\n\n");
	
	int mon, day;
	
	for(mon = 0; mon < MONKEY; mon++)
	{
		printf("Enter the food eaten by Monkey %d\n", (mon + 1));
		
		for(day = 0; day < DAYS; day++)
		{
			printf("Enter the amount for day %d:", (day + 1));
			scanf("%d", &monkeyFood[mon][day]);
		}
		
		puts("");
	}
	
	//displaying
	
	for(mon = 0; mon < MONKEY; mon++)
	{
			
		for(day = 0; day < DAYS; day++)
		{
			printf("%d ", monkeyFood[mon][day]);
		}
		
		puts("");
	}
	
	
	//average per day
	for(day = 0; day < DAYS; day++)
	{
		float totalPerDay = 0;
		
		for(mon = 0; mon < MONKEY; mon++)
		{
			totalPerDay += monkeyFood[mon][day];
			
		}
		printf("\nThe average for day %d is %.2f", (day+1), (totalPerDay/MONKEY)); 
		puts("");
	}
	
	//finding the least for a monkey
	puts("\nFinding the least food for a monkey");
	printf("Which monkey are you interested in:");
	scanf("%d", &mon);
	
	mon--;
	
	least = monkeyFood[mon][0];
	int leastday;
		
	for(day = 1; day < DAYS; day++)
	{
		if(monkeyFood[mon][day] < least)
		{
			least = monkeyFood[mon][day];
			leastday = day;
		}
	}
	
	printf("\nThe least amount of food eaten for the week is: %d on day %d\n", least, (leastday + 1));
	
	
	//finding the greatest for a monkey
	puts("\nFinding the greatest food for a monkey");
	printf("Which monkey are you interested in:");
	scanf("%d", &mon);
	
	mon--;
	
	greatest = monkeyFood[mon][0];
	int greatday;
		
	for(day = 1; day < DAYS; day++)
	{
		if(monkeyFood[mon][day] > greatest)
		{
			greatest = monkeyFood[mon][day];
			greatday = day;
		}
	}
	
	printf("\nThe greatest amount of food eaten for the week is: %d on day %d\n", greatest, (greatday + 1));
	
	return 0;
}
