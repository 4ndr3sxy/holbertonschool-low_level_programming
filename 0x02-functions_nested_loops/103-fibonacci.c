#include <stdio.h>

/**
 * fibonacci - called by main()
 * Return: without return
 */
void fibonacci(void)
{
	int i;
	long num1 = 0;
	long num2 = 1;
	long sum = 0;
	long tmpResult = 0;

	while (tmpResult <= 4000000)
	{
		tmpResult = num1 + num2;
		if (tmpResult <= 4000000)
		{
			if (tmpResult % 2 == 0)
			{
				sum += tmpResult;
			}
		}
		num1 = num2;
		num2 = tmpResult;
	}
	printf("%ld\n", sum);
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
