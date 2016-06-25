

#include <stdio.h> 
#include <stdlib.h>

void main(){
	printf("\n");
	
	char * students[4] = {"Sally", "Mark", "Paul", 
        "Sue"};
	
	for (int i=0; i<4; i++){
	
		printf("%s : %d\n\n",
			   students[i], &students[i]);
	}
    
    

}
	


