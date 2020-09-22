#include "holberton.h"

/**
 *
 *
 *print_alphabet - prints alphabet
 *@c: The character to print
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		_putchar(c);
		_putchar('\n');
}
