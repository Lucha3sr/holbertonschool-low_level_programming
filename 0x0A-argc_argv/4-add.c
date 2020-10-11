#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the name of a program
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, ii;
	int sum = 0;
	char c;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (ii = 0; argv[i][ii] != '\0'; ii++)
		{
			c = argv[i][ii];
			if (isdigit(c) == 0)
			{
				printf("Error");
				printf("\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
