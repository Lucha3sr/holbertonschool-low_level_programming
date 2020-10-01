#include "holberton.h"

/**
 * *cap_string - capitalize all words of a string.
 *@s: s
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0, ii = 0;
	int signos [] = {44, 59, 46, 9, 10, 32, 33, 63, 34, 40, 41, 123, 125};

	while (*(s + i) != 0)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] -= 32;
		for (ii = 0 ii <= 122; ii++)
		{
			if (*(s + i) == signos[ii])
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122
				    && *(s + i + 1) != 0)
				{
					*(s + i + 1) -= 32;
					break;
				}
				else
					break;
			}
		}
			i++;
		}
return (s);
}
