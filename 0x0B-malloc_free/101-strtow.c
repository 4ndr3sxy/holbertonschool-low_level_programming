#include "holberton.h"

/**
 * size_to_pointer_array2d - tets
 * @countWords: count of letters
 * @pointToPointArray2d: pointer to pointers
 * Return: Char ** of Chain of characters
 */
void *size_to_pointer_array2d(int countWords, char **pointToPointArray2d)
{
	int i, j;

	for (i = 0; i < countWords; i++)
	{
		pointToPointArray2d[i] = malloc(sizeof(char *) * 20);
		if (pointToPointArray2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(pointToPointArray2d[i]);
			free(pointToPointArray2d);
			return (NULL);
		}
	}
	return (0);
}

/**
 * strtow - Args with \n in a char *
 * @str: chain to add to array 2D"
 * Return: Char ** of Chain of characters
 */
char **strtow(char *str)
{
	int i = 1, j = 0, k = 0, countWords = 1, validator = 0;
	char **pointToPointArray2d;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[i + 1])
	{
		if (((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) &&
			str[i - 1] == ' ')
			countWords++;
		i++;
	}
	pointToPointArray2d = malloc(sizeof(char *) * countWords);
	if (pointToPointArray2d == NULL)
	{
		free(pointToPointArray2d);
		return (NULL);
	}
	size_to_pointer_array2d(countWords, pointToPointArray2d);
	for (i = 0; i < countWords; i++)
	{
		for (j = 0; j < 20; j++)
		{
			while ((str[k] >= 65 && str[k] <= 90) || (str[k] >= 97 && str[k] <= 122))
			{
				validator = 1;
				pointToPointArray2d[i][j] = str[k];
				k++;
			}
			if (validator && str[k] == ' ')
			{
				validator = 0;
				break;
			}
			validator = 0;
		}
		pointToPointArray2d[i][j] = '\0';
	}
	pointToPointArray2d[i] = NULL;
	return (pointToPointArray2d);
}
