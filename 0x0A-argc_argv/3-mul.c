#include <stdio.h>
#include <stdlib.h>


/**
 * main - print the name of a program
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("error\n");
		return (0);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n",  mult);
		return (0);
}
