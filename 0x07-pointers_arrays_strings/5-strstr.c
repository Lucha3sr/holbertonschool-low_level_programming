#include "holberton.h"

/**
 **_strstr  - find first occurrence of string.
 * @haystack: char haystack
 * @needle: char needle
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, ii;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (ii = 0; needle[ii] != '\0'; ii++)
		{
			if (needle[ii] != haystack[i] || haystack == '\0')
			{
				break;
			}
			else
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
