#include <stdio.h>

int main(int argc, char *argv[])
{

	// defining two ints
	int i = 6; // or 110
	int j = 5; // or 101

	// OR statement returns 111 -> 7
	printf("OR : %d \n", i | j);

	// AND statement returns 100 -> 4
	printf("AND : %d \n", i & j);

	// Shifting the bits with << by 1 
	// 0110 becomes 1100 or 12
	printf("<< 1 : %d \n", i << 1);

	// Shifting the bits with << by 2
	// 0110 should become 11000 or 24
	printf("<< 2 : %d \n", i << 2);

	// Shifting the bits to the right with >> by 1
	// 0110 should become 0011 or 3
	printf(">> 1 : %d \n", i >> 1);

	// Shifting the bits >> by 2
	// 0110 should become 0001 or 1
	// because we pushed one bit out of the boundaries
	printf(">> 2 : %d \n", i >> 2);

	// flipping the bits with ~
	printf("~i : %d \n", ~i);
}

