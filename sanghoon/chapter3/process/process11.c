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
