#include "holberton.h"

/**
 * _calloc - prints buffer in hexa
 * @nmemb: size respect to type aditional
 * @size: the size of type of date
 * Return: pointer to new size memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *newSizeMemory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newSizeMemory = malloc(nmemb * size);
	if (newSizeMemory == NULL)
		return (NULL);

	for (i = 0; i < nmemb - 1; i++)
	{
		newSizeMemory[i] = 0;
	}

	return (newSizeMemory);
}


void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Holberton");
    strcpy(a + 9, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}
