/*
 * process3.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{

	pid_t pid;
	pid = fork();
	if (pid > 0)
		wait(NULL);
	printf("Hello, Process! %d\n", pid);

	return 0;
}
