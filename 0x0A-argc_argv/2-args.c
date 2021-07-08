#include "holberton.h"

/**
 *main - Initial function
 *@argc: number of command line arguments
 *@argv: array containing the program command line arguments
 *Return: 0 to success;
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 1)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int result = num1 * num2;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
