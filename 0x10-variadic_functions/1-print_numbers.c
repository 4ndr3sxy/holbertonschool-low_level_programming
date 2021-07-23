#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separator
 * @separator: chain of char to separate numbers print.
 * @n: size of numbers in arguments.
 * Return: Without return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list listArgs;

	va_start(listArgs, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%d%s", va_arg(listArgs, int), separator);
			else
				printf("%d", va_arg(listArgs, int));
		}
		else
		{
			printf("%d\n", va_arg(listArgs, int));
		}
	}
	va_end(listArgs);
}
