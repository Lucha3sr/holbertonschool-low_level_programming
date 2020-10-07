#include "holberton.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @n: n
 * Return: Always 0.
 */
int auxfunction(int i)


/**
 * _sqrt_recursion - natural square root of a number
 * @n: n
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int i;

	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (n * _sqrt_recursion(i + 1, n));
	}
}
