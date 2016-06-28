// simple interest c program
// si = (p * r * t) / 100 
// p = principal amount
// r = rate of interest
// t = time

#include <stdio.h>

int main(int argc, char *argv[])
{
	float p, t; // principal amount and time
	float r, si; // rate and simple interest

	printf("Principal interest calculator\n"); 
	printf("Please enter principal amount\n"); 
	scanf("%f", &p);
	printf("Please enter rate of interest in percent\n"); 
	scanf("%f", &r);
	printf("Please enter time\n"); 
	scanf("%f", &t);

	// Calculations :>
	si = (p*r*t)/100;
	// debugging line
	// printf("%f, %f, %f\n", p, r, t);
	printf("\nCalculated simple interest: \t %.2f\n", si);

	return 0;
}
