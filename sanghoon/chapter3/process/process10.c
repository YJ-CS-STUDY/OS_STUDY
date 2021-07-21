#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>

int global = 0; // global data
int main()
{
	int *heap = (int*)malloc(sizeof(int*)); // memory allocation
	heap[0] = 0;
	int stack = 0; // local variable
	int pid = fork();
	
	if (pid == 0) // child process
	{
		heap[0] = heap[0] + 2;
		stack = stack + 2;
		global = global + 2;
		printf("child process\n");
		printf("%d %d %d\n", heap[0], stack, global);
	}
	        
	else if (pid > 0) // child process
        {
		wait(NULL);
                heap[0] = heap[0] + 1;
                stack = stack + 1;
                global = global + 1;
		printf("parent process\n");
                printf("%d %d %d\n", heap[0], stack, global);
        }
	return 0;
}
