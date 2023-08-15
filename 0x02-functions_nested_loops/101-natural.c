/*
 * file: 101-natural.c
 */

#include <stdio.h>

/**
 * main - list all the natural number below 1024 (excluded)
 *        that are multiple of 3 or 5.
 *
 * Return: Always 0.
 *        */
int main(void)
{
	int i, sum = 0;
	for (i = 0 ; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0
			sum += i;
	}

	printf("%d\", sum);
	
	return (0);
}
