#include <stdio.h>

/**
 * fibonacci - caleld by main()
 * Return: without return
 */
void fibonacci(void)
{
	int i;
	long num1 = 0;
	long num2 = 1;
	long tmpResult;

	for (i = 1; i <= 50; i++)
	{
		tmpResult = num1 + num2;

		printf("%ld", tmpResult);
		putchar(i != 50 ? ',' : '\n');
		if (i != 50)
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
