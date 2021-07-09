#include "holberton.h"

/**
 *main - Initial function
 *@argc: number of command line arguments
 *@argv: array containing the program command line arguments
 *Return: 0 to success;
 */
int main(int argc, char *argv[])
{
	int coinsArray[] = {25, 10, 5, 2, 1};
	int valArgv;
	int i = 0, coinsUseds = 0;

	if (argc == 2)
	{
		valArgv = atoi(argv[1]);
		if (valArgv > 0)
		{
			while (coinsArray[i] && valArgv != 0)
			{
				if (valArgv - coinsArray[i] >= 0)
				{
					valArgv -= coinsArray[i];
					coinsUseds++;
				}
				else
				{
					i++;
				}
			}
			printf("%d\n", coinsUseds);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
