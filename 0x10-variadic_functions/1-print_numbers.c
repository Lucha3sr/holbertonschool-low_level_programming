#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints nbrs
 * @separator: separator
 * @n: n
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list a_list;

	va_start(a_list, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(a_list, int));
		}
		else
		{
			printf("%d%s", va_arg(a_list, int), separator);
		}
	}
	printf("%d\n", va_arg(a_list, int));
	va_end(a_list);
}
