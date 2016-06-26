

#include <stdio.h> 
#include <stdlib.h>


void generateTwoRandomNums(int* rand1, int* rand2){
	
	*rand1 = rand() % 100 +1 ;
	*rand2 = rand() % 100 +1;
	
	printf("New rand1 in function = %d\n\n", *rand1);
	
	printf("New rand2 in function = %d\n\n", *rand2);
	
}

void main(){
	printf("\n");
	
	int rand1 = 0, rand2 = 0;
	
	printf("Main before fucntion call\n\n");
	
	printf("rand1 = %d\n\n", rand1);

	printf("rand2 = %d\n\n", rand2);
	
	generateTwoRandomNums(&rand1, &rand2);
    
    printf("rand1 = %d\n\n", rand1);

	printf("rand2 = %d\n\n", rand2);
}
	


