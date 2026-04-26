#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void handler(int);
void main ()
{
	signal(SIGALRM, handler);
	printf("\nprocess started ");
	alarm(5);
	int i = 1;
	while(i <= 10)
	{
		printf("\nMCA");
		sleep(1);
		i++;
	}
}
void handler(int sig)
{
	printf("\nCall your friend...\n");
}
