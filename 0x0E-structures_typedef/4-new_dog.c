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
	dog_t *ptrNew_dog = malloc(sizeof(dog_t));

	if (ptrNew_dog == NULL)
	{
		free(ptrNew_dog);
		return (NULL);
	}

	if (name == NULL)
	{
		free(ptrNew_dog);
		return (NULL);
	}
	else
	{
		(*ptrNew_dog).name = name;
	}

	(*ptrNew_dog).age = age;

	if (owner == NULL)
	{
		free(ptrNew_dog);
		return (NULL);
	}
	else
	{
		(*ptrNew_dog).owner = owner;
	}

	return (ptrNew_dog);
}
