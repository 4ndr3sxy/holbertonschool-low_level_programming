#include <stdio.h>

/**
 * main - Initial function
 *
 *Return: return 0 to success
 */
int main(void)
{
	char ch = 123;

	for (ch = 122; ch > 96; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
