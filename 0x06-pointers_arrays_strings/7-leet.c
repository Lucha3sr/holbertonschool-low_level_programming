#include "holberton.h"

/**
 **leet - encode a string.
 *@s: s
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, ii;
	char letras [] = "aAeEoOtTlL";
	char num [] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; letras[ii] != '\0'; ii++)
		{
			if (letras[ii] == s[i])
			{
				s[i] = num[ii]
}
		}
	}
return (s);
}
