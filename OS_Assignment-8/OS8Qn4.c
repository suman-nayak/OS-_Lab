#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
    int fd1[2], fd2[2];
    char msg1[100], msg2[100];

    pipe(fd1);
    pipe(fd2);

    if(fork() == 0)
    {
        close(fd1[1]);
        close(fd2[0]);

        read(fd1[0], msg1, sizeof(msg1));
        printf("Child received: %s\n", msg1);

        scanf("%[^\n]", msg2);
        write(fd2[1], msg2, sizeof(msg2));
    }
    else
    {
        close(fd1[0]);
        close(fd2[1]);

        scanf("%[^\n]", msg1);
        write(fd1[1], msg1, sizeof(msg1));

        wait(NULL);

        read(fd2[0], msg2, sizeof(msg2));
        printf("Parent received: %s\n", msg2);
    }

    return 0;
}
