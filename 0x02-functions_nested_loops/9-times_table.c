#include "holberton.h"

/**
 * times_table - display times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{

	int a, b, c, d, e, f;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			c = a * b;
			d = c / 10;
			e = c % 10;
		}
	}
	if (c > '9')
	{
		_putchar(d);
		_putchar(e);
	}
	else
	{
		_putchar(c);
	}
	if (b != '9')
	{
		_putchar(',');
		_putchar(' ');
	}
		f = a * (b + 1);
		if (c < '9' && f < '9' && b != '9')
		{
			_putchar(' ');
		}
		_putchar('\n');
}
