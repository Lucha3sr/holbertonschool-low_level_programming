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
	int i, ii, j, jj, k, sum = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++)
		{
			sum++;
		}
	}
	p = (char *) malloc(sum * sizeof(char) + ac + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (j = 0; j < ac; j++)
	{
		for (jj = 0; av[j][jj] != '\0'; jj++)
		{
			p[k] = av[j][jj];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
