#include "holberton.h"

/**
 *validate - Validate char *
 *@string: value to validate yours position is all digits
 *Return: all chars is digits return 0, else 1
 */
int validate(char *string)
{
	int i = 0;

	while (string[i])
	{
		if (!(string[i] >= 48 && string[i] <= 57))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 *main - Initial function
 *@argc: number of command line arguments
 *@argv: array containing the program command line arguments
 *Return: 0 to success;
 */
int main(int argc, char *argv[])
{
	int sumNumber = 0;
	int i = 1;

	if (argc > 1)
	{
		while (argv[i])
		{
			int val = validate(argv[i]);

			if (!val)
			{
				sumNumber += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sumNumber);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
