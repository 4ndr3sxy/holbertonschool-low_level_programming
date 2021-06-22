#include <stdio.h>

/**
 * _isalpha - called by main()
 * Description: validate letter
 * @ch: Character to validate
 * Return: return 0 to success
 */
char _isalpha(char ch)
{
	if ((ch >=  97 && ch <= 122) || (ch >=  65 && ch <= 90))
		return (1);
	return (0);
}
