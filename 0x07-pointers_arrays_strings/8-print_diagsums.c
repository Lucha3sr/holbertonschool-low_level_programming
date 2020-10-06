#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals.
 * @a: a
 * @size: size
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, ii, sum1 = 0, sum2 = size;

	for (i = 0; i < size; i++)
	{
		for (ii = 0; ii < size; ii++)
		{
			printf ("%d", sum1
