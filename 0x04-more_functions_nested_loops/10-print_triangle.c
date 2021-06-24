#include "holberton.h"

/**
 * print_triangle - called to maiin()
 * Description: print a triangle with '#'
 * @size: size to triangule a print
 * Return: withour return
 */
void print_triangle(int size)
{
	int i, j, tmp;

	tmp = size;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + 1) >= tmp)
			{
				putchar('#');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
		tmp--;
	}
	if (size <= 0)
		putchar('\n');
}
