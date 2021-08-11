#include "holberton.h"

/**
 * print_buffer - function called to main()
 * @b: char
 * @size: int
 * Return: withour return
 */
void print_buffer(char *b, int size)
{
	int hex = 0;
	int i, j, k;
	int val = 0;

	if (size == 0)
		return;

	for (i = 0; i <= size;)
	{
		printf("%08x: ", hex);
		for (j = i; j < (i + 10); j++)
		{
			if (j >= size)
			{
				printf("     ");
			}
			else
			{
				printf("%02x%02x ", b[j], b[j + 1]);
			}
			j++;
		}
		for (k = i; k < (i + 10); k++)
		{
			if ((b[k] >= 0 && b[k] <= 9) ||  b[k] == '\n' || (b[k] == '\0' && k != 127))
			{
				if (b[k] == '\0' && k == size)
				{
					break;
				}
				val = 1;
			}
			printf("%c", (val ? '.' : b[k]));
			val = 0;
		}
		printf("\n");
		i += 10;
		hex += 10;
	}
	printf("\n");
}
