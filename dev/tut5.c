

#include <stdio.h> 
#include <stdlib.h>

void main(){
	printf("\n");
	
	int whatToDo =0;
	
	do{
		printf("\n");
		printf("1. What time is it?\n");
		printf("2. What is today's date?\n");
		printf("3. What day is it?\n");
		printf("4. Quit\n");
		
		scanf(" %d", &whatToDo);
	}while(whatToDo < 1 || whatToDo >4);
	
	switch(whatToDo){
        case(1) : printf("Print the time");
                    break;
        case(2) : printf("Print the date");
                    break;
        case(3) : printf("Print the day");
                    break;
        default : printf("bye bye");
                exit(0);
                break;
    }
    

}
	


