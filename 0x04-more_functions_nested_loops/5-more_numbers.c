#include "holberton.h"

/**
 * more_numbers - print numbert from 0 a 14
 * Return: without return
 */
void more_numbers(void)
{
	int ch;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (ch = 48; ch < 50; ch++)
		{
			for (j = 48; j < 58; j++)
			{
				_putchar(ch == 48 ? j : ch);
				if (ch != 48)
				{
					_putchar(j);
					if (j == 52)
						break;
				}
			}
		}
		_putchar('\n');
	}
}
