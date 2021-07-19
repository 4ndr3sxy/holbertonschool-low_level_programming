#include "dog.h"

/**
 * free_dog - free memory of struct dog.
 * @d: pointer to struct dog.
 * Return: Without return.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
}
