// 
// this is based on an example from the K & R Guide to C Programming
//
#include <stdio.h>

int main(int argc, char *argv[])
{
	// copy input to output without scanf or printf
	
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
	return 0;
}
