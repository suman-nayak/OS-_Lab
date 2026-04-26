#include <stdio.h>
#include<unistd.h>
#include<sys/wait.h>

void main(){
        int fd[2];
        pipe(fd);
        int n;
        printf("enter the size of the array: ");
        scanf("%d",&n);
        int arr[n];
	printf("Enter the Array Element:\n");
        for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
        if (fork() == 0) {
        	close(fd[0]);
        	write(fd[1], arr, sizeof(arr));
        	close(fd[1]);
        }
        else {
        	close(fd[1]);
        	int buf[10];
        	read(fd[0], buf, sizeof(buf));
        	close(fd[0]);
        	int freq[10] = {0};
        	for (int i = 0; i < n; i++)
        	{
                	freq[buf[i]]++;
        	}
        	for (int i = 0; i < 10; i++) {
            		if (freq[i] > 0)
         		printf("%d occurs %d times\n", i, freq[i]);
        	}

    	}

}
