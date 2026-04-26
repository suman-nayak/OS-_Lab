#include<stdio.h>
#include<unistd.h>
void main ()
{
	int fd[2];
	int count = 0;
	while(pipe(fd) != -1)
	{
		count++;
	}
	printf("\nNumber of pipe creaded: %d", count);
}
