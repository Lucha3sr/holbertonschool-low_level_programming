#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = argv[1];
	int num2 = argv[3];
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' || argv[2] != '/'
	    || argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2] == '/' || argv[2] == '%' && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));
}
