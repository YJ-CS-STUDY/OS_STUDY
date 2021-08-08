/*
 * openMP1.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */

#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv[])
{
	#pragma omp parallel // compiler directive
	{
		printf("I am a parallel region.\n");
	}
	return 0;
}
