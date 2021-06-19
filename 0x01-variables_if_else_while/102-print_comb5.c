#include <stdio.h>

/**
 * main - Initial function
 *
 *Return: return 0 to success
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (l = j; l < 58; l++)
				{
					if (i != k || j != l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						putchar(i == 57 && j == 56 && k == 57 && l == 57 ? '\n' : ',');
					if (!(i == 57 && j == 56 && k == 57 && l == 57))
						putchar(' ');
					}

				}
			}
		}
	}
	return (0);
}
