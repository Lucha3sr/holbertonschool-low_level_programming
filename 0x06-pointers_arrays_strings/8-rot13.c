#include "holberton.h"

/**
 * rot13 - encode a string using rot13.
 * @s: s
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char abc[] "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char abc2[] "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; abc[ii] != '\0'; ii++)
		{
			if (s[i] == abc[ii])
			{
				s[i] = abc2[ii];
				break;
			}
		}
	}
return (s);
}
