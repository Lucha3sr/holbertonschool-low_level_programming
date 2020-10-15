#include "holberton.h"
#include <stdlib.h>


/**
 * arra_range - creates an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)

	int *s, i;

if (min < max)
{
	return (NULL);
}
s = malloc(max - min + 1 * sizeof(char));
if (s == NULL)
{
return (NULL)
while (i <= max - min)
{
s[i] = ;
i++;
}
return (s);
