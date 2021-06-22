#include <stdio.h>

/**
 * print_sign - called to main()
 * Description: validate number, positive, negative or zero
 * @n: number to validate
 * Return: return 0 to success
 */
int print_sign(int n)
{
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
