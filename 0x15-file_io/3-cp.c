#include "main.h"

/**
 * cp - Copy the information of a file in other
 * @file_from: File to copy
 * @file_to: New file with information of file_from
 * Return: Without return;
 */
void cp(const char *file_from, const char *file_to)
{
	int fileF, fileT, valR = 1, valW = 0;
	char buffer[1024];

	fileF = open(file_from, O_RDONLY);
	if (fileF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fileT = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileT == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (valR > 0)
	{
		valR = read(fileF, buffer, 1024);
		if (valR == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		valW = write(fileT, buffer, valR);
		if (valW == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fileF) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileF);
		exit(100);
	}
	if (close(fileT) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileT);
		exit(100);
	}
}

/**
 * main - Initialñ function
 * @ac: count of values
 * @av: array of values
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
