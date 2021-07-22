#include <stdio.h>
#include <stdlib.h>

/**
 * main - initial function
 * @argc: size of arguments
 * @argv: values of arguments
 * Return: 0 to success.
 */
int main(int argc, char *argv[])
{
	char *a;
	int i;
	int x;

	a = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < x; i++)
	{
		if (i == x - 1)
		{
			printf("%.2hhx", a[i]);
		}
		else
		{
			printf("%.2hhx ", a[i]);
		}
	}
	printf("\n");
	return (0);
}
