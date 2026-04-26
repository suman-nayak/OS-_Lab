#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void handler(int sig)
{
    printf("Child process interrupted by SIGINT\n");
}

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        signal(SIGINT, handler);
        while (1)
        {
            printf("Child running...\n");
            sleep(1);
        }
    }
    else
    {
        sleep(3);
        kill(pid, SIGINT);
        sleep(1);
        kill(pid, SIGKILL);
        wait(NULL);
    }

    return 0;
}
