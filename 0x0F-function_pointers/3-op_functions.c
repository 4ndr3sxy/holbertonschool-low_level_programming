#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: firts number.
 * @b: second number.
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: firts number.
 * @b: second number.
 * Return: substract
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicate two numbers
 * @a: firts number.
 * @b: second number.
 * Return: multiplicate
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: firts number.
 * @b: second number.
 * Return: divide
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module two numbers
 * @a: firts number.
 * @b: second number.
 * Return: module
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
