// Calculating the perimeter of a circle
//

#include <stdio.h>

int main (int argc, char *argv[])
{
	float pi = 3.1415; // ;)
	float radius, perimeter, area;

	printf("Please enter the radius\n");
	scanf("%f", &radius);
	
	area = pi*radius*radius;
	perimeter = 2*pi*radius;

	printf("The area of the circle is: %.2f\n"
			"And the perimeter is: %.2f\n", area, perimeter);
	return 0;
}
