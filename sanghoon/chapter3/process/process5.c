#include <stdio.h>
#include <unistd.h>
#include <wait.h>

/*
 * How many processes are created?
 */

int main()
{
	fork(); // fork a child process
	fork(); // fork another child process
	fork(); // and fork another

	return 0;
}
