#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory.
 * @b: b
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
		if (p == NULL)
		{
			exit(98);
		}
	return (p);
}
