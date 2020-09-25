#include "holberton.h"

/**
 * print_triangle - print triangle.
 *@size: size
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b, c, e, h

	e = size - 1;
	h = 1;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
		for (b = e; b > 0; b--)
		{
			_putchar (' ');
		}
		for (c = 0; c < h; c++)
		{
			_putchar ('#');
		}
		e--;
		h++;
		_putchar ('\n');
		}
	else
	{
		_putchar('\n')
			}
}
