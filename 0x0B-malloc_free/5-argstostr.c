#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 * @ac: int ac
 * @av: char av
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i, ii;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != 0; ii++)
		{
			p = malloc((i + ii) * sizeof(char) +ac);
			i++;
			ii++;
			if (p == NULL)
			{
				return (NULL);
