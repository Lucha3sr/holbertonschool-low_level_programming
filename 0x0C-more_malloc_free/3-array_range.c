#include "holberton.h"
#include <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *p, i;

if (min > max)
{
return (NULL);
}
p = malloc(((max - min) + 1) * sizeof(int));
if (s == NULL)
{
return (NULL);
for (i = 0; i <= (max - min); i++)
{
p[i] = min + i;
}
return (p);
