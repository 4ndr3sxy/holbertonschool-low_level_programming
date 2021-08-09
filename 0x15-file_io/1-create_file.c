#include "main.h"

/**
 * read_textfile - read filename and save in a new buffer
 * @filename: name of file to read
 * @letters: letters to read in filename
 * Return: letters counts in new buffer
 */
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;
	ssize_t val;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT, 0600);
	if (file == -1)
		return (-1);
	while (text_content[i])
	{
		i++;
	}

	val = write(file, text_content, i);
	if (val == -1)
		return (-1);

	close(file);

	return (1);
}
