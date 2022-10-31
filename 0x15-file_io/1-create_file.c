#include "main.h"

/**
 * create_file - function to creates a file
 * @filename: name of the file
 * @text_content: file contents
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int temp;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (count = 0; text_content[count]; count++)
		;

	temp = write(fd, text_content, count);

	if (temp == -1)
		return (-1);

	close(fd);

	return (1);
}
