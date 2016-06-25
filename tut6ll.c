#include <stdio.h>

void main(){
	
	printf("\n");
	
	typedef union{
		short individual;
		float pound;
		float ounce;
		
		
	} amount;
	
	
	
	amount orangeAmt = {.ounce = 16.9};
	
	printf("%d ", orangeAmt.ounce);
	
	
	typedef struct{
		
		char *brand;
		amount theAmount;
	} orangeProduct;
	
	orangeProduct productOrdered = {"Chiquita", 
		.theAmount.ounce = 16};
	printf("you bought %.2f ounces of %s oranges\n\n", 
		   productOrdered.theAmount.ounce, productOrdered.brand);
}
