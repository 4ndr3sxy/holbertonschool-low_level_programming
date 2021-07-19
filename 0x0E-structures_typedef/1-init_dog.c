#include "dog.h"

/**
 * init_dog - initializate of struct of type dog
 * @d: pointer to struct
 * @name: value to initialize in dog->name
 * @age: value to initialize in dog->age
 * @owner: value to initialize in dog->owner
 * Return: without return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
