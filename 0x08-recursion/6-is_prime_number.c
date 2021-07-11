#include "holberton.h"

/**
 * number_prime - print 1 if is prime or 0
 * @n: number to search prime
 * @div: number divisible
 * Return: 1 if is prime or 0
 */
int number_prime(int n, int div)
{
	int result = n / 2;

	if (result < div)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	div++;
	return (number_prime(n, div));
}

/**
 * is_prime_number - search number is prime
 * @n: number to recall
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (number_prime(n, 2));
}
