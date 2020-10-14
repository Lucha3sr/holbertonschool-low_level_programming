#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of a string
 * @str: str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i, ii;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	s = malloc(i * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii < i; ii++)
	{
		s[ii] = str[ii];
	}
	return (s);
}
