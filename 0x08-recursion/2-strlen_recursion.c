#include "holberton.h"

/**
 * _strlen_recursion - return the lenght of a string recursively.
 *@s: s
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
		{
			i = _strlen_recursion(s + 1);
			i++;
			return (i);
		}

}
