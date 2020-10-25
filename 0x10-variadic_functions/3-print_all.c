#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char  - print char
 * @cye:cye
 * @mylist: mylist
 * Return: 0.
 */
void print_char(char *cye, va_list mylist)
{
	printf("%s%c", cye, va_arg(mylist, int));

}

/**
 * print_int  - print int
 * @cye: cye
 * @mylist: mylist
 * Return: 0.
 */
void print_int(char *cye, va_list mylist)
{
	printf("%s%i", cye, va_arg(mylist, int));
}

/**
 * print_float - print float
 * @cye: cye
 * @mylist: mylist
 * Return: 0.
 */
void print_float(char *cye, va_list mylist)
{
	printf("%s%f", cye, va_arg(mylist, double));
}

/**
 * print_string - print string
 * @cye: cye
 * @mylist: mylist
 * Return: 0.
 */
void print_string(char *cye, va_list mylist)
{
	char *str = va_arg(mylist, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
	printf("%s%s", cye, str);
}

/**
 * print_all - print all.
 *@format: format
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	prin_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	int i = 0;
	int j = 0;

	char *cye = "";

	va_list mylist;

	va_start(mylist, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].op[0])
			{
				ops[j].f(cye, mylist);
				cye = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(mylist);
	printf("\n");
}
