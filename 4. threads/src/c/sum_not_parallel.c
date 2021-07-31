/*
 * sum_not_parallel.c
 * By: ithingv <ithing43@gmail.com>
 * Created: 2021/08/01 by ithingv
 */

#include <stdio.h>
#include <omp.h>

#define SIZE 100000000

int a[SIZE], b[SIZE], c[SIZE];

int main(int argc, char *argv[])
{
        int i;
        for (i=0; i < SIZE; i++)
                a[i] = b[i] = i;

        for (i = 0; i < SIZE; i++) {
                c[i] = a[i] + b[i];
        }
        
	return 0;
}
