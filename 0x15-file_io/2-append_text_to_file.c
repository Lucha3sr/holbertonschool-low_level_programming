#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: integer
 * @text_content: integer
 * Return: Holberton project
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	write(fd, text_content, i);
	close(fd);
	return (1);
}
