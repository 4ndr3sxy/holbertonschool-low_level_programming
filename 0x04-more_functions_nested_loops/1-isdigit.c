#include "holberton.h"

/**
 * _isdigit - called to main()
 * Description: validate vale is digit 0 - 9
 * @num: num a validate is digit or not
 * Return: return 1 to success
 */
int _isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (1);
	return (0);
}
