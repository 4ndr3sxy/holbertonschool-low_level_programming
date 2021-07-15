#include "holberton.h"

/**
 * argstostr - Args with \n in a char *
 * @ac: count og args
 * @av: pointer to pinter of args
 * Return: Chain of characters with \n
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0, increment = 0;
	char *concatArgs = malloc(sizeof(char));

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		while (av[i][l])
		{
			l++;
		}
		concatArgs = realloc(concatArgs, sizeof(char) * (l + increment));
		if (concatArgs == NULL)
		{
			free(concatArgs);
			return (NULL);
		}
		increment += l;

		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatArgs[k] = av[i][j];
			k++;
		}
		concatArgs[k] = '\n';
		k++;
	}
	return (concatArgs);
}
