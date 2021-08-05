#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int maxValue = 1, temp;
	int count = 0;
	while (n >= maxValue)
	{
		maxValue *= 2;
		count++;
	}
	maxValue /= 2;
	if (maxValue < 2)
	{
		putchar(n + '0');
	}
	else
	{
		while (count > 0 || n != 0)
		{
			temp = maxValue;
			if (maxValue <= n)
			{
				putchar('1');
				n -= temp;
			}
			else
			{
				putchar('0');
			}
			maxValue /= 2;
			count--;
		}
	}
}

int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}