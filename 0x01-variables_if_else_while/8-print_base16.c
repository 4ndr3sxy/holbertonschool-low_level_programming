#include <stdio.h>

/**
 * main - Initial function
 *
 *Return: return 0 to success
 */
int main(void)
{
	int ch = 48;

	for (ch = 48; ch < 58; ch++)
		putchar(ch);
	for (ch = 97; ch < 103 ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
