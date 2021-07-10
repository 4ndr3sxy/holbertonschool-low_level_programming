#include "holberton.h"

/**
 * ans_sqrt_recursion - find the number sqrt
 * @m: Number to search the sqrt
 * @i: increment
 * Return: sqrt.
 */
int ans_sqrt_recursion(int m, int i)
{
	int resultSqrt = i * i;

	if (i >= m)
		return (-1);
	if (resultSqrt != m)
	{
		i++;
		ans_sqrt_recursion(m, i);
	}
	else
	{
		return (i);
	}
	return (0);
}

/**
 * _sqrt_recursion - pass value to ans_sqrt_recursion
 * @n: number to search sqrt
 * Return: sqrt.
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int resultSqrt = ans_sqrt_recursion(n, i);

	return (resultSqrt);
}
