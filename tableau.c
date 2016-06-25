#include <stdio.h>


void main(){
	
	int tableau[] = {1,2,3,4};
	int somme = 0;
	int *pointer = tableau;
		
	for (int i=0; i<4; i++){
		
		printf("adresse de tableau[%d]: %d \n", i, pointer);
		printf("valeur de tableau[%d]: %d\n", i,  *pointer);
		somme = somme + *pointer;
		pointer++;
	}
	
	printf("\n\n et voila la somme: \t %d\n", somme);
}
