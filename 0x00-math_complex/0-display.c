#include "holberton.h"

/**
 * display_complex_number - print number real and imaginary
 * @c: Struct type complex, contains number real and imaginary
 * Return: Without return.
 */
void display_complex_number(complex c)
{
	printf("%.0f", c.re);
	if (c.im != 0)
	{
		if (c.im > 0)
			printf(" + %.0fi", c.im);
		else
			printf(" - %.0fi", (c.im * -1));
	}
	printf("\n");
}
