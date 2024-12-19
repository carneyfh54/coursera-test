#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//function prototype
float calculateRetail(float markUp, float wholesale);

int main(int argc, char *argv[]) {
	float markupPercent, wholeSale, retailPrice;
	
	puts("This program will compute the retail price for an item");
	
	//inputs
	printf("Enter the wholesale cost of the item:");
	scanf("%f", &wholeSale);
	
	printf("Enter the markup cost of the item in decimal(e.g 0.25):");
	scanf("%f", &markupPercent);
	
	//calling the function
	retailPrice = calculateRetail(markupPercent, wholeSale);
	
	//display
	printf("The retail price for the item is:%.2f", retailPrice);
	
//	printf("The retail price for the item is:%.2f", calculateRetail(markupPercent, wholeSale));
	
	return 0;
}

//function definition for calculateretail
float calculateRetail(float markUp, float wholesale)
{
	return ((1 + markUp) * wholesale);
}
