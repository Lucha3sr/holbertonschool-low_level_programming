#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: n
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list a_list;

	va_start(a_list, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a_list, int);
	}
	va_end(a_list);
	return (sum);
	va_end(a_list);
}
