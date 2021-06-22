#include "holberton.h"

/**
 * _islower - Initial function
 * Description: FYI
 * @ch: char printed
 * Return: return 0 to success
 */
int _islower(int ch)
{
	if (ch >=  97 && ch <= 122)
		return (1);
	return (0);
}
