#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("\n");
	
	printf("dieses Programm gibt alle uebergebenen argv aus\n");

	for (int i=0; i < argc; i++)
	{
		printf("argv[%d]: \t %s\n", i, argv[i]);
		

	}
	


	return 0;

}
