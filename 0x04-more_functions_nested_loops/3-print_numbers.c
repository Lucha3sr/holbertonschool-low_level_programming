#include "holberton.h"

/**
 * print_numbers - print digit 0 to 9 .
 *
 * Return: always 0.
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
