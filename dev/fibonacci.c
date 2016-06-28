// Example of the Fibonacci series in C
//
#include <stdio.h>

int main(int argc, char *argv[])
{
	int limit;
	printf("\n");
	printf("Enter the number of fibonacci numbers required \n");
	scanf("%d", &limit);
	
	int first = 0;
	int second = 1;
	int counter = 1;
	while (counter <= limit)
	{
		//first two numbers are always the same
		if (counter ==1){
			printf("0 ");
		} else if (counter == 2){
			printf("1 ");
		} else {
			// ans will store the fibonacci number
			int ans = first + second;
			first = second;
			second = ans;
			printf("%d ", ans);
		}
	counter++;
	}


}
