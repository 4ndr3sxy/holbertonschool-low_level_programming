#include <stdio.h>

/**
 * main - Initial function
 *
 *Return: return 0 to success
 */
int main(void)
{
	int num = 48;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		putchar(num != 57 ? ',' : '\n');
		if (num < 57)
			putchar(' ');
	}
	return (0);
}
