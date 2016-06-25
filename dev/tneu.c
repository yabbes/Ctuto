

#include <stdio.h>

void main(){
	printf("\n");
	char fizz[] = "fizz";
	
	printf("The size of the string %s is %d\n\n",
			fizz, sizeof(fizz));
			
	printf("I will print each Character\n");
	
	for (int i=0; i<sizeof(fizz); i++){
		printf("%c \t", fizz[i]);
	
	}
	
	
	
	

}
	


