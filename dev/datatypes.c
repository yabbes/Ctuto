//
// just printing the size of some datatypes
//
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	float j;
	short k;
	long m;

	printf("I will print the sizes of some usual"
			" datatypes\n\n");

	printf("size of int: \t %d\n", sizeof(int));
	printf("size of float: \t %d\n", sizeof(float));
	printf("size of short: \t %d\n", sizeof(short));
	printf("size of long: \t %d\n", sizeof(long));

}
