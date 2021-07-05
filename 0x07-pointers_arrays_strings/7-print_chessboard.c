#include "holberton.h"

/**
 * print_chessboard - print char[][]
 * @a: array 2D
 * Return: Without return
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char c;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			c = a[i][j];
			putchar(c);
		}
		putchar('\n');
	}
}
