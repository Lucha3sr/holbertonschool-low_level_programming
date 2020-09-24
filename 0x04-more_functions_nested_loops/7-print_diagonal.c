#include "holberton.h"

/**
 * print_diagonal - print a diagonal.
 *@n: n
 */
void print_diagonal(int n)
{
	int i, l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (i = 0; i <= l; i++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
