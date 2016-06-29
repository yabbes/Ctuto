// print the Pascal's triangle in C
// using recursive functions

#include <stdio.h>

int factorial(int n)
{
	if(n == 1 || n == 0){
		return 1;
	}
	return n*factorial(n-1);
}

int nCr(int n, int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(int argc, char *argv[])
{
	int n;
	printf("Enter the number of rows\n");
	scanf("%d", &n);
	int i, j, k;
	for (i=0;i<n;i++){
		for(j=n-i;j>0;j--){ // Insert white space total number of rows - row that is currently printed 
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d ", nCr(i,k));
		}
		printf("\n");
	}
}
