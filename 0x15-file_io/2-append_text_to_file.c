#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file
 * @text_content: content to add
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int temp;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;

		temp = write(fd, text_content, count);

		if (temp == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
