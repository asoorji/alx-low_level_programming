#include "main.h"

/**
 * read_textfile - Reads a text file and write the output
 * @filename: name of the file
 * @letters: number of characters
 *
 * Return: 0 if fail or number of characters if success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count1, count2;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	count1 = read(fd, buffer, letters);
	count2 = write(STDOUT_FILENO, buffer, count1);

	close(fd);

	free(buffer);

	return (count2);
}
