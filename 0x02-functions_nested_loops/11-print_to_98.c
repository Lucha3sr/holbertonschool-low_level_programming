#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all naturals
 *@n: n
 * Return: Always 0.
 */
void print_to_98(int n);

{
	int i;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%i, ", a);
		}
	}
	if (n > 98)
	{
		for (a = n; a > 98; a--)
		{
			printf("%i, ", a);
		}
	}
	printf("98\n");
