#include "holberton.h"

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

/**
 * main - Initial function
 * Description: call a function print_sign()
 * Return: return 0 to success
 */
int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
