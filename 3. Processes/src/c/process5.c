/*
 * process5.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

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
