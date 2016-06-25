// 
// prints directory in argv[1] with file name,
// ino number and length
//

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	DIR *dir;
	struct dirent *sd;
	char path[50];
	
	// if argv[1] is empty set . current directory
	if (argv[1] == NULL)
	{ 
		printf("no argv was given"
				"printing contents of current directory\n");
		sprintf(path, ".");
	}else{
		//set path with first argv
		strcpy(path, argv[1]);
		printf("printing contents of dir %s\n",
					path);
	}

	dir = opendir(path);

	if (dir == NULL) 
	{
		printf("Error opening directory\n");
		exit(1);
	}

	while ( (sd=readdir(dir)) != NULL )
		{
			printf(">> %s :(inode) %d (len) %d \n", 
			sd->d_name, sd->d_ino, sd->d_reclen);
		}

	closedir(dir);

	return 0;
}
