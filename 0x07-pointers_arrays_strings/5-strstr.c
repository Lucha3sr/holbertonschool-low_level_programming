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
		if (haystack[i] == needle[0])
		{
		for (ii = 0; needle[ii] != '\0'; ii++)
		{
			if (needle[ii] == '\0')
			{
				return (haystack + i);
			}
			if (needle[ii] != haystack[i] || haystack == '\0')
			{
				break;
	      		}
		}
		}
	}
		return ('\0');
}
