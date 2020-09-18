#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n = '0';
	int m;


	while (n <= '9')
	{
		m = '0';
		while (m <= '9')
		{
			putchar (n);
			putchar (m);
			if (n != '9' || m != '9')
			{
				putchar (',');
					putchar (' ');
				}
				m++;
			}
		n++;
	}
	putchar ('\n');
	return (0);
}
