#include <stdio.h>

/**
 * main - print fizzbuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n:

		for (n = 1; n <= 100; n++)
		{
			if ((n % 3) == 0 && (n % 5) == 0)
			{
				printf("FizzBuzz");
			}
			else if ((n % 5) == 0)
			{
				printf("Buzz");
			}
			else if ((n % 3) == 0)
			{
				printf("Fizz");
			}
			else
				printf("%", n);
			if (n == 100)
			{
				continue;
				printf(" ");
			}
		}
	printf("\n");
	return (0);
}
