#include <stdio.h>


struct dog{
	
	const char* name;
	const char* breed;
	int avgHeightCm;
	int avgWeightLbs;
	
};

void getDogInfo(struct dog theDog){
	printf("\n");
	
	
	printf("Name: %s\n", theDog.name);
	printf("Name: %s\n", theDog.breed);
	printf("Name: %d\n", theDog.avgHeightCm);
	printf("Name: %d\n", theDog.avgWeightLbs);
	
}

void getMemoryLocations(struct dog theDog){
	printf("\n");
	printf("Print Locations of struct %s\n\n", theDog.name);
	
	
	printf("Name: %d\n", theDog.name);
	printf("Name: %d\n", theDog.breed);
	printf("Name: %d\n", &theDog.avgHeightCm);
	printf("Name: %d\n", &theDog.avgWeightLbs);
	
}

void main(){
	
	struct dog cujo = {"Cujo", "Saint Bernard", 90, 264};
	struct dog harald = {"Harald", "Whatever", 90, 330};
	
	getDogInfo(cujo);
	getDogInfo(harald);
	
	
	getMemoryLocations(cujo);
	getMemoryLocations(harald);
	
}
