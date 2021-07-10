#include "holberton.h"

/**
 * factorial - factorize of a number
 * @n: number to factorice
 * Return: Always number factoriced.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n != 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
