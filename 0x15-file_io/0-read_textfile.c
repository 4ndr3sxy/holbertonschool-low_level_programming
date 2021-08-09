#include "main.h"

/**
 * read_textfile - read filename and save in a new buffer
 * @filename: name of file to read
 * @letters: letters to read in filename
 * Return: letters counts in new buffer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	size_t countLetters;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	countLetters = read(file, buffer, letters);
	write(STDOUT_FILENO, buffer, letters);

	close(file);
	free(buffer);

	return (countLetters);
}
