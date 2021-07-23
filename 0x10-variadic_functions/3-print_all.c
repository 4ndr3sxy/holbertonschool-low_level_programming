#include "variadic_functions.h"

/**
 * print_all - print all types, int, char, char *, float.
 * @format: characters to reroll to know that print.
 * Return: without return.
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *value, *concatenator = ", ";
	va_list listArgs;

	va_start(listArgs, format);

	while (format[i])
	{
		if (!format[i + 1])
			concatenator = "";

		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(listArgs, int), concatenator);
			break;
		case 'i':
			printf("%d%s", va_arg(listArgs, int), concatenator);
			break;
		case 'f':
			printf("%f%s", va_arg(listArgs, double), concatenator);
			break;
		case 's':
			value = va_arg(listArgs, char *);
			if (value == NULL)
				value = "(nil)";
			printf("%s%s", value, concatenator);
			break;
		default:
			break;
		}
		i++;
	}
	printf("\n");
	va_end(listArgs);
}
