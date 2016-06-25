// includes .... for read open write...
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <string.h> // and for strcpy()
#include <stdlib.h> // for exit(1)

int main(int argc, char *argv[])
{

	int fd;
	char file[20];
	char text[80];

	strcpy(file, argv[1]); // first argv is our file name
	strcpy(text, argv[2]); // second argv is our text

	fd = open(file, O_CREAT | O_WRONLY, 0600);

	if (fd == -1) //fails opening file
		{
			printf("failed creating & opening file %s\n", file);
		}
	int confirm; // ask user
	printf("confirm writing to file %s by typing 1\n", file);
	scanf("%d", &confirm);

	// printf("%d", confirm);
	// begin writing
	//

	if (confirm == 1){
		write(fd, text, strlen(text));

	}else{
		printf("error\n");
		close(fd);
		exit(1);
	}

	close(fd);




	return 0;
}

