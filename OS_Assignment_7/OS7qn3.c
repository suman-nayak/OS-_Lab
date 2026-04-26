#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void handler(int sig)
{
    printf("Signal received: %d\n", sig);
}

int main()
{
    pid_t pid;

    signal(SIGCHLD, handler);

    pid = fork();

    if (pid == 0)
    {
        printf("Child process is terminating\n");
    }
    else
    {
        wait(NULL);
        sleep(1);
    }

    return 0;
}
