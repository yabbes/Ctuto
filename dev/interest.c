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
	float amt; // principal amount plus simple interest

	printf("Principal interest calculator\n"); 
	printf("Please enter principal amount\n"); 
	scanf("%f", &p);
	printf("Please enter rate of interest in percent\n"); 
	scanf("%f", &r);
	printf("Please enter time\n"); 
	scanf("%f", &t);

	// Calculations :>
	si = (p*r*t)/100;
	amt = si + p;
	// debugging line
	// printf("%f, %f, %f\n", p, r, t);
	printf("\np: %.2f\tr: %.2f\tt: %.0f\n", p, r, t);
	printf("\nCalculated simple interest: \t %.2f\n", si);
	printf("This amounts to a total of: %.2f\n", amt);
	return 0;
}
