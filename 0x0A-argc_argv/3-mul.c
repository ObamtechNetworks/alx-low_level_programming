#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: returns the number of arguments passed to the command line
 * @argv: an array of the actual strings passed to the command line
 * Description: A program that multiplies two numbers passed to the commandliin
 *
 * Return: Alwyas 0 (success)
 */
int main(int argc, char **argv)
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
		printf("Error\n");
	return (1);
}
