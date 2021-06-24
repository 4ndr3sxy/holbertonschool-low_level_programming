#include "holberton.h"

/**
 * _isupper - called by main()
 * Description: validate letter Upper
 * @ch: Character to validate
 * Return: return 1 to success
 */
int _isupper(int ch)
{
	if (ch >=  65 && ch <= 90)
		return (1);
	return (0);
}
