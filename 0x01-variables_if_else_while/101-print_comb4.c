#include <stdio.h>

/**
 * main - Initial function
 *
 *Return: return 0 to success
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			for (k=j; k < 58; k++)
			{
				if (i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(i == 55 && j == 56 && k == 57 ? '\n' : ',');
					if (i != 55 || j != 56 || k != 57)
						putchar(' ');
				}
			}
		}
	}
	return (0);
}
