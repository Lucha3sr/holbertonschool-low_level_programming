#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;
	int l = 97;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar ('\n');
	return (0);
}
