#include "holberton.h"

/**
 * reverse_array - reverse string.
 *@a: a.
 *@n: n.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, b, c;

	b = n - 1;
	for (i = 0; i < b; b--, i++)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}
