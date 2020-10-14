#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: unsigned int
 * @c: c
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
		return (str);
}
