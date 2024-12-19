#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int countPerfect(int sc[], int length);
int main(int argc, char *argv[]) {


	int score[SIZE];
	int i;
	
	
	//accepting inputs
	puts("Get ready to enter the values for score between 0-100");
	for(i = 0; i < SIZE; i++)
	{
		printf("Enter the value for score %d:", (i+1));
		scanf("%d", &score[i]);
		
		//validation
		while(score[i] < 0 || score[i] > 100)
		{
			printf("Enter the value for score %d between 0-100 :", (i+1));
			scanf("%d", &score[i]);
		}
	}
	
	//printing the array
	printf("\n\nThese are your scores entered:\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%d\n", score[i]);
  	} 

	//displaying
	printf("\nThe number of perfect score is: %d",countPerfect(score,SIZE));
	
	
	return 0;
}

//function definition
int countPerfect(int sc[], int length)
{
	int counter = 0 , i;
	
	for(i = 0; i < length; i++)
	{
		if(sc[i] == 100)
		++counter;
	}
	
	return counter;
}
