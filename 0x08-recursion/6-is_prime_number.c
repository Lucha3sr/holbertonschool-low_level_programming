#include "holberton.h"

/**
 * prime_aux - prime number.
 * @n: n
 * @a: a
 * Return: Always 0.
 */
int prime_aux(int n, int a)
{
if (n % a == 0 && a != (n / 2))
{
return (0);
}
else if (a >= (n / 2))
{
return (1);
}
else
{
return (prime_aux(n, a + 1));
}
}

#include "holberton.h"

/**
 * is_prime_number - prime number.
 * @n: n
 * Return: Always 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime_aux(n, 2));
}
