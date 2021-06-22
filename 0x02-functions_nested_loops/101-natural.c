#include "holberton.h"
#include <stdio.h>

/**
 * sum_naturals - called by main()
 * Description: sumatory of number natural multiples of 3 or 5
 * Return: without return
 */
void sum_naturals(void)
{
	int i;
	int sumMultiples = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sumMultiples += i;
		}
	}
	printf("%d\n", sumMultiples);
}
