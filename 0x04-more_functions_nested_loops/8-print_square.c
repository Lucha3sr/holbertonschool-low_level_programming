#include "holberton.h"

/**
 * print_square - print square.
 *@size: square size
 * Return: Always 0.
 */
void print_square(int size)
{
	int l, a;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (a = 0; a < size; a++)
				_putchar('#');
			if (l == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
