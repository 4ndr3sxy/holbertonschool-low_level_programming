#include "holberton.h"
#include <math.h>

/**
 * modulus - get modulus of number complex
 * @c: Struct type complex
 * Return: double with modulus of number complex.
 */
double modulus(complex c)
{
	double modulus = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (modulus);
}
