#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n:n
 * @m:m
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	int i = 0;

	while (r)
	{
		if (r & 1)
		{
			i++;
		}
		r = r >> 1;
	}
	return (i);
}
