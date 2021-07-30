#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list -node to linked list
 * @str: value a save
 * @len: size of str
 * @next: the next node
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LIST_H */
