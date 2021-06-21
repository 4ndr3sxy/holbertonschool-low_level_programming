#include <stdio.h>

/**
 * main - Initial function
 * Description: Show-print "Holberton"
 * Return: return 0 to success
 */
int main(void)
{
	int letters[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
