#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: Value to raised
 * @y: Power to raised
 * Return: return value of pow x,y
 */
int _pow_recursion(int x, int y)
{
	if (x == 1 || y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		if (y >= 0)
		{
			return (x * _pow_recursion(x, y));
		}
		else
		{
			return (1);
		}
	}
}
