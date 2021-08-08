/*
 * process8.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	pid_t pid, pid1;
	pid = fork();
	if (pid == 0) // child process
	{
		pid1 = getpid();
		printf("child: pid = %d\n", pid); // A
		printf("child: pid1 = %d\n", pid1); // B
	}
	else if (pid > 0) // parent process
	{
		pid1 = getpid();
		printf("parent: pid = %d\n", pid); // C
		printf("parent: pid1 = %d\n", pid1); // D
		wait(NULL);
	}
	return 0;
}