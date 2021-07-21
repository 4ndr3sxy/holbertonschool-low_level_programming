#include "function_pointers.h"

/**
 * print_name - print char *name in function pointer (*f)
 * @name: name to pass function pointer
 * @f: function pointer
 * Return: Whitout return
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	(*f)(name);
}
