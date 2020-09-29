#include "holberton.h"

/**
 * swap_int - swap the values of two integers.
 *@a: a
 *@b: b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
