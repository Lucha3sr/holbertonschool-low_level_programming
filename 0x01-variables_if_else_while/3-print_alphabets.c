#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, ch;

	for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}

	for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
	putchar('\n');

	return (0);
}
