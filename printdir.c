#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	DIR *dir;
	struct dirent *sd;

	dir = opendir(".");

	if (dir == NULL) 
	{
		printf("Error opening directory");
		exit(1);

	}
	printf("printing items in current dir\n");

	while ( (sd=readdir(dir)) != NULL )
		{
			printf(">> %s :(inode) %d (len) %d \n", 
			sd->d_name, sd->d_ino, sd->d_reclen);
		

		}


	closedir(dir);


	
	return 0;
}
