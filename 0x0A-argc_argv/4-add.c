#include "holberton.h"

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

	if (argc >= 1)
	{
		while (argv[i])
		{
			if(atoi(argv[i]) > 0 && atoi(argv[i]) <= INT_MAX)
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
