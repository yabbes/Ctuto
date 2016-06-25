#include <stdio.h>

void main(){
	
	printf("\n");
	char c;
	
	printf("Mit welchem buchstaben beginnt dein vorname?\n");
	c = getchar();
	
	printf("Super, ich weiß jetzt dass dein vorname mit %c beginnt\n",
	c);
	
	char name[20];
	
	printf("Jetzt gib bitte deinen ganzen vornamen ein\n");
	scanf("%s", &name);
	printf("Hallo %s", name);
	
	int tag, monat, jahr;
	
	printf("Bitte gib jetzt dein geburtsdatum ein\n");
	scanf("%d.%d.%d", &tag, &monat, &jahr);
	
	printf("Du bis geboren am:\n %02d.%02d.%04d\n",
	tag, monat, jahr);
	

}