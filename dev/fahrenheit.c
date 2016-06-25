// 
// this code follows an example from the K&R C Programming Guide
//

#include <stdio.h>

int main(int argc, char *argv[])
{
	//declaration of variables
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5.0 / 9.0 * (fahr-32.0);
		printf("%3.1fC \t%3.0fF\n", celsius, fahr);
		fahr = fahr + step;
	}
	return 0;
}

