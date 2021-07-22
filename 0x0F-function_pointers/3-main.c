#include "3-calc.h"

/**
 * main - initial function
 * @argc: size of arguments
 * @argv: values of arguments
 * Return: 0 to success.
 */
int main(int argc, char *argv[])
{
	int (*cp_get_op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	cp_get_op_func = (*get_op_func)(argv[2]);
	if (argv[2][1] || !cp_get_op_func)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (*cp_get_op_func)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
