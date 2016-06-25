

#include <stdio.h> 
#include <stdlib.h>

void main(){
	printf("\n");
	
	char wholeName[12] = "Derek Banas";
    
    int primeNumbers[3] = {2, 3, 5};
    
    int morePrimes[] = {1, 2, 3, 4};
    
    printf("The first prime in the list %d\n\n",
           primeNumbers[0]);
			
    printf("Und jetzt ne alternative zu scanf()\n\n");
    char yourCity[30];
    printf("What city do you live in?");
    fgets(yourCity, 30, stdin);
    
    //Saubermachen
    for(int i=0; i<30; i++){
        if(yourCity[i] == '\n'){
            yourCity[i] = '\0';
            break;
        }
    }
    
    
    printf("Hello %s\n\n", yourCity);
    
    

}
	


