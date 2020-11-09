#include "holberton.h"
/**
 * create_file - Create a function that creates a file
 * @filename: integer
 * @text_content: integer
 * Return: Holberton project
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	write(fd, text_content, i);
	close(fd);
	return (1);
}
