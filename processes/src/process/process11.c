/*
 * process11.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid;
	pid = fork();

	if (pid == 0)
	{
		printf("child process, %d\n", pid);
	}
	else
	{
		printf("parent : pid of child: %d\n", pid);
	}
	return 0;
}
