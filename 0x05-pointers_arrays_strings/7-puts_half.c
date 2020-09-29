#include "holberton.h"

/**
 * puts_half - print the second half of a string.
 *@str: str
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int mid;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 != 0)
	{
		mid = (i + 1) / 2;
	}
	else
	{
		mid = i / 2;
	}
	for (; mid < i; mid++)
	{
		_putchar (str[mid]);
	}
	_putchar('\n');
}
