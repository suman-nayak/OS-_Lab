/*#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main() {
    int fd[2];
    
    printf("Read descriptor: %d\n", fd[0]);
    printf("Write descriptor: %d\n", fd[1]);
    return 0;
}
*/
#include <stdio.h>
#include <unistd.h>

int main()
{
    int fd[2];

    if(pipe(fd) == -1)
        return 1;

    printf("Read descriptor: %d\n", fd[0]);
    printf("Write descriptor: %d\n", fd[1]);

    return 0;
}
