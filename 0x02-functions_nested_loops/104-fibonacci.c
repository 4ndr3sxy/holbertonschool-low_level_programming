#include <stdio.h>

/**
 * fibonacci - caleld by main()
 * Return: without return
 */
void fibonacci(void)
{
	int i;
	long double num1 = 0;
	long double num2 = 1;
	long double tmpResult;

	for (i = 1; i <= 98; i++)
	{
		tmpResult = num1 + num2;

		printf("%Lf", tmpResult);

		putchar(i != 98 ? ',' : '\n');
		if (i != 98)
		{
			putchar(' ');
		}
		num1 = num2;
		num2 = tmpResult;
	}
}

/**
 * main - Initial function
 * Return: return 0 to success
 */
int main(void)
{
	fibonacci();
	return (0);
}
