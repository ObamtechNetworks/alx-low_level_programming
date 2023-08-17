#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point for all functions and program
 * @argc: argument count
 * @argv: argument vector, returns a pointer to the character(s) passed
 * Description: A function that performs simple operations
 * using commandline arguments and also using sevaral functions
 * Usage: calc num1 operator num2 e.g ./calc 1 + 2
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int result;
	char *operator;

	/* arguments must be four arguments num1 operator num2 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* convert arguments to number */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	/* ensure that the operator is only a single character */
	if (strlen(operator) == 1 && get_op_func(operator) != NULL)
	{
		result = get_op_func(operator)(num1, num2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error!\n");
		exit(99);
	}
	return (0);
}
