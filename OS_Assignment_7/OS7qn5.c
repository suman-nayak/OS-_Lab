#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void parent_handler(int sig)
{
    printf("Parent received signal from child process\n");
}

void child_handler(int sig)
{
    printf("Child received signal from parent process\n");
}

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        signal(SIGUSR1, child_handler);
        pause();
        kill(getppid(), SIGUSR2);
    }
    else
    {
        signal(SIGUSR2, parent_handler);
        sleep(1);
        kill(pid, SIGUSR1);
        pause();
        wait(NULL);
    }

    return 0;
}
