#include <stdio.h>
#include <time.h>

/**
 * main - Initial function
 *
 * Return: return 0 to success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{

		printf("%d 0 is zero");
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
