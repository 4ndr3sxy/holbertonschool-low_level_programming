#include "holberton.h"

/**
 * _abs - called to main()
 * Description: convert anyone number in you absolute value
 * @n: character  to validate
 * Return: return number in absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
