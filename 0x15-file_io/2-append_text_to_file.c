#include "main.h"

/**
 * append_text_to_file - read filename and save text_content at the end of file
 * @filename: name of file to read
 * @text_content: letters to add in filename
 * Return: 1 to success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0;
	ssize_t val;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
