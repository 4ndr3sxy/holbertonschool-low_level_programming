#include "holberton.h"

/**
 * ans_sqrt_recursion - find the number sqrt
 * @m: Number to search the sqrt
 * @i: increment
 * Return: sqrt.
 */
int ans_sqrt_recursion(int m, int i)
{
	if (i * i ==  m)
	{
		return (i);
	}
	else if (i * i > m)
	{
		return (-1);
	}
	else
	{
		i++;
		return (ans_sqrt_recursion(m, i));
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
