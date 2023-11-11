#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>



int main ()
{
	int fd ;
	fd = open("zaki.txt", O_RDWR | O_CREAT);

	if (fd == -1)
		printf("error!");
	else
		printf("succes : %d" , fd);
	close(fd);

}