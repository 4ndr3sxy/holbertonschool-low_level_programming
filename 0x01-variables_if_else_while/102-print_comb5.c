#include <stdio.h>

/**
 * main - Initial function
 *
 *Return: return 0 to success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(i == 98 && j == 99 ? '\n' : ',');
			if (!(i == 98 && j == 99))
			{
				putchar(' ');
			}
		}
	}
	return (0);
}
