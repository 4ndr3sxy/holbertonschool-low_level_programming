#include "holberton.h"

/**
 * fizz_buzz_test - called to main()
 * Description:print number from 1 to 100 with "Fizz-Buzz test"
 * Return: wiithout return
 */
void fizz_buzz_test(void)
{
	int l = 1;

	while (l <= 100)
	{
		if (l % 3 == 0 && l % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (l % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (l % 5 == 0)
		{
			printf(l != 100 ? "Buzz " : "Buzz\n");
		}
		else
		{
			printf("%d ", l);
		}
		l++;
	}
}

/**
 * main - Initial function
 * Return: return 0 to success
 */
int main(void)
{
	fizz_buzz_test();
	return (0);
}


