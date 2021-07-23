#include "variadic_functions.h"

/**
 * print_strings - print char * with separator
 * @separator: chain of char to separate char * print.
 * @n: size of arguments kind char *.
 * Return: Without return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list listArgs;

	va_start(listArgs, n);
	for (i = 0; i < n; i++)
	{
		char *argument = va_arg(listArgs, char *);

		argument = argument == NULL ? "(nil)" : argument;
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s%s", argument, separator);
			else
				printf("%s", argument);
		}
		else
		{
			printf("%s\n", argument);
		}
	}
	va_end(listArgs);
}
