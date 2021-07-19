#include "dog.h"

/**
 * new_dog - Create new struct dog
 * @name: name the dog
 * @age: age the dog
 * @owner: owner the dog
 * Return: new struct dog initialized
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	char *cpName, *cpOwner;
	dog_t *ptrNew_dog = malloc(sizeof(dog_t));

	if (ptrNew_dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
	{
	}
	for (j = 0; j < owner[j]; j++)
	{
	}
	cpName = malloc(sizeof(char) * (i + 1));
	if (cpName == NULL)
	{
		free(ptrNew_dog);
		return (NULL);
	}
	cpOwner = malloc(sizeof(char) * (j + 1));
	if (cpOwner == NULL)
	{
		free(cpName);
		free(ptrNew_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		cpName[i] = name[i];
	cpName[i] = '\0';
	for (j = 0; owner[j]; j++)
		cpOwner[j] = owner[j];
	cpOwner[j] = '\0';
	(*ptrNew_dog).name = cpName;
	(*ptrNew_dog).age = age;
	(*ptrNew_dog).owner = cpOwner;
	return (ptrNew_dog);
}
