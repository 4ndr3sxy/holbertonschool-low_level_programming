#include "holberton.h"

/**
 * argstostr - Args with \n in a char *
 * @ac: count og args
 * @av: pointer to pinter of args
 * Return: Chain of characters with \n
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *concatArgs = malloc(sizeof(char) * 100);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (i == 0)
			{
				concatArgs[k] = av[i][j];
				k++;
			}
			else
			{
				if ((av[i][j] >= 65 && av[i][j] <= 90) ||
					(av[i][j] >= 97 && av[i][j] <= 122))
				{
					concatArgs[k] = av[i][j];
					k++;
				}
			}
		}
		concatArgs[k] = '\n';
		k++;
	}
	return (concatArgs);
}
