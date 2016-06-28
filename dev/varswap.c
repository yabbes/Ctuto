// swapping variables with and without temp variable

#include <stdio.h>

int main(int argc, char *argv[]){
	int var1, var2, temp;

	printf("Enter first and second value\n");
	scanf("%d %d", &var1, &var2);
	printf("\nYou entered %d as var1 and %d as var2\n", var1, var2);

	printf("Now we're gonna swap these...\n");
	temp = var2;
	var2 = var1;
	var1 = temp;
	//Swapping logic completed
	
	printf("We swapped them\n"
			"Now you've got %d as var1 and %d as var2\n", var1, var2);

	// Now swapping them back in order without help of temp var
	printf("Now swapping them back\n");
	
	var2 = var1 + var2;
	var1 = var2 - var1;
	var2 = var2 - var1;
	
	printf("And now back without temp var\n"
			"Now you should have  %d as var1 and %d as var2\n", var1, var2);
	return 0;
}
