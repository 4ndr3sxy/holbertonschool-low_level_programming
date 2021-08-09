#include "main.h"

/**
 * create_file - Create a file and save text_content in new file
 * @filename: name of file to create
 * @text_content: Content to add in new file
 * Return: 1 to success or -1 to fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int val;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		val = write(file, text_content, strlen(text_content));
		if (val == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
