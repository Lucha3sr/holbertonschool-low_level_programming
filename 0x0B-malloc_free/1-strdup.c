#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of a string
 * @str: str
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	for (i = 0; str[i] != '\0'; i++)
	{
		s = malloc((str[i]) * sizeof(char));
		if (str == NULL)
		{
			return (NULL);

		}
		
