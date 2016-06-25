

#include <stdio.h>

main(){
	printf("\n");
	
	int secretNumber = 10, numberGuessed = 0;
	
	
	printf("\n\n");
	
	while (numberGuessed != secretNumber){
		printf("Guess my secret number: \n");
		scanf(" %d", &numberGuessed);
		
		printf("Nein\n");
		
		if (numberGuessed== secretNumber){
			printf("Endlich");
			break;
		} 
	}	

}
	


