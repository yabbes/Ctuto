// Calculate the perimeter and area of a rectangle
// :)

#include <stdio.h>

int main(int argc, char *argv[])
{
	float length, breadth, area, perimeter;

	printf("Enter the length and breadth of the rectangle\n");
	scanf("%f %f", &length, &breadth);

	area = length * breadth;
	perimeter = 2*(length + breadth);

	printf("The resulting area of your rectangle is %.4f, the perimeter is %.4f\n", area, perimeter);

	return 0;
}

