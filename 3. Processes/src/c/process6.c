/*
 * process6.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/07/21 by ithingv
 */

#include <stdio.h>
#include <unistd.h>

/*
 * How many processes are created?
 */

int main()
{
	int i;

	for (i=0; i < 4; i++)
		fork();
	return 0;
}
