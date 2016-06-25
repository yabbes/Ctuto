#include <stdio.h>

/* struct tuto mit typedef */

typedef struct{
		char name[50];
		int age;
}person;
/*struct heisst person*/

int main(int argc, char *argv[])
{

	

	person hans = {"Hans", 22};
	person peter = {"Peter", 30};
	

	printf("\n Struct I: \n");
	printf("\n Name: %s\n Age: %d\n", hans.name, hans.age);

	printf("\n Struct II: \n");
	printf("\n Name: %s\n Age: %d\n", peter.name, peter.age);


	return 0;
}
