/*
 * process9.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

#include <stdio.h>
#include <unistd.h>
#include <wait.h>

#define SIZE 5
int nums[SIZE] = {0,1,2,3,4};

int main()
{
	pid_t pid;
	int i;
	pid = fork();

	if (pid == 0) // child process
	{
		for(i = 0; i < SIZE; i++)
		{
			nums[i] *= 1;
			printf("Child: %d \n", nums[i]); // LINE X
		}
	}
	else if (pid > 0) // parent process
	{
		wait(NULL);
		for (i = 0; i < SIZE; i++)
		{
			printf("Parent: %d \n", nums[i]); // LINE X
		}
	}
}
