#include <stdio.h>
#include <signal.h>

int main()
{
    printf("Signal number of SIGINT = %d\n", SIGINT);
    printf("Signal number of SIGQUIT = %d\n", SIGQUIT);

    return 0;
}
