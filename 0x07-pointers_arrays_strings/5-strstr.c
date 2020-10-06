#include "holberton.h"

/**
 **_strstr  - find first occurrence of string.
 * @haystack: char haystack
 * @needle: char needle
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int ii;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
		for (ii = 0; needle[ii] != '\0'; ii++)
		{
			if (haystack[i] == needle[ii])
			{
				return (haystack[i]);
			}
			if !(haystack[i] == needle[ii])
			{
				break;
			}
		}
		}
	}

	return ('\0');
}
