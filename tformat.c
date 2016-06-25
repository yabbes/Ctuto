#include <stdio.h>

void main(){

	printf("\n");
	float zahl1 = 12.436556;
	float zahl2 = 1.5;
	int zahl3 = 5;
	
	printf("3 zahlen festgelegt\nZahl1: %f\t Zahl2: %f\t Zahl3: %d\n\n",
	zahl1, zahl2, zahl3);
	
	printf("Jetzt versuchen wir eine formatiertere Ausgabe:\n\n");
	
	printf("Zahl 1: %.4f\n", zahl1);
	printf("Zahl 2: %.4f\n", zahl2);
	printf("Zahl 3 (Integer): %.4d\n\n", zahl3);
	
	int tag = 12, monat = 6, jahr = 2016;
	
	printf("Weil das so gut geklappt hat, jetzt als formatiertes Datum\n");
	printf("Als int gespeichert: \n");
	printf("tag: %d\n", tag);
	printf("monat: %d\n", monat);
	printf("jahr: %d\n", jahr);

	printf("Datum: %02d.%02d.%04d\n\n", tag, monat, jahr);
	
	

}