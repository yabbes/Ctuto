

#include <stdio.h>

void main(){
	printf("\n");
	char fizz[] = "fizz";
	
	for (int i =0; i<=40; i++){
		
		if ((i%2) == 0) continue;
		printf("%d \n", i);
		
		if ((i%5) == 0) {
			printf("%d \n\a", i);
		}
	}
	

}
	


