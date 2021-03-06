#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: filename
 * @letters: letters
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(size_t) * letters);
	bytes = read(fd, buffer, letters);
	buffer[bytes + 1] = '\0';
	write(STDOUT_FILENO, buffer, bytes);
	close(fd);
	free(buffer);
	return (bytes);
}
