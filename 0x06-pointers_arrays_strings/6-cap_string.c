#include "holberton.h"

/**
 * *cap_string - capitalize all words of a string.
 *@s: s
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] <= 'a' && s[i] >= 'z')
		i++;
	if (s[i - 1] == ';' || s[i - 1] == ' ' || s[i - 1] == '!')
		(s[i- 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(')
			(s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
		s[i] = -32;
	i++;
}
return (s);
