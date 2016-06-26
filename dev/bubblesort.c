//
// implements simple bubble sort in C
//
#include <stdio.h>

int main(int argc, char *argv[])
{
	//create the variables
	int array[] = {1, 2, -5, 9, 3, 6};
	int i, org, temp;

	for (i = 0; i < (sizeof(array)/sizeof(int)); i++)
	{
		//printf("%d\n", i);
		for (org = 0; org < (sizeof(array)/sizeof(int)); org++)
		{
			if (array[org] > array[org+1])
			{
				temp = array[org];
				array[org] = array[org+1];
				array[org +1] = temp;
			}
		}
	}

	// print the sorted array
	for (int j = 0; j < (sizeof(array)/sizeof(int)); j++)
	{
		printf("%d \t", array[j]);
	}

	return 0;
}
