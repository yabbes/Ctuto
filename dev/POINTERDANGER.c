// Some examples of what not to do with pointers
// because it will make your program crash
// DON'T DO IT

#include <stdio.h>
// This should not be compiled !

int main(int argc, char *argv[])
{
	// Trying to dereference a pointer pointing to NULL
	*ptr = NULL; // This is fine, but if you try and dereference it now
	*ptr = 0; // CRASH

	// Trying to dereference ' wild ' pointers
	int *pWild;
	*pwild = 24; // CRASH

	// Trying to dereference a pointer 'out of bounds'
	// Remember arrays are effectively pointers
	int example[10];
	example[12] = 2; // CRASH

	// Pointer peril with strings / char arrays
	// if you set a pointer to a char array
	// it's pointing to read only memory and you cannot change it
	char *str1 = "a string"; // Cannot be changed
	char str2[1024] = "a string"; // Can be changed of course

	str1[0] = 'b'; // CRASH 
	str2[0] = 'b'; // ok


}
