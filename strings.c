#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[30];
	char str2[40];
	int n;
	
	printf("String wurde noch nicht initialisiert");
	n = strlen(str);
	printf("noch ist str %d lang\n", n);
	
	sprintf(str, "gefuellter string..\n");
	n =strlen(str);
	printf("jetzt ist str %d lang\n", n);

	printf("I'm gonna print that str\n %s\n", str);

	/* copy the string to str2 */
	strcpy(str2, str);

	printf("kopierter string str2: \n%s", str2);
	/* erase string content with memset */

	memset(str, '#', 6);
	puts(str); // printing with puts now



}
