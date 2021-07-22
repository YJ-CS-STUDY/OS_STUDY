/*
 * process4.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int value = 5;

int main()
{
	pid_t pid;
	pid = fork();

	if (pid == 0) // child process
	{
		value += 15;
		return 0;
	}
	else if (pid > 0)
	{
		wait(0);
		printf("Parent: value = %d\n", value); // output?
	
	}
}
