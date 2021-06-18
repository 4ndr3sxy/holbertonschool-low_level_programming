#include <stdio.h>

/**
 * main - Initial function
 *
 *Return: return 0 to success
 */
int main(void)
{
	char ch = 97;

	for (ch = 97; ch < 123; ch++)
		putchar(ch);
	for (ch = 65; ch < 90; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
