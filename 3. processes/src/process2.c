/*
 * process2.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

#include <stdio.h>
#include <unistd.h>

int main()
{

	pid_t pid;
	pid = fork();
	printf("Hello, Process! %d\n", pid);

	return 0;
}
