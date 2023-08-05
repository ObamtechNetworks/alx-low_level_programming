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
	int count;

	if (argc >= 3)
	{
		for (count = 1; count < argc - 1; count++)
			product = atoi(argv[count]) * atoi(argv[count + 1]);
		printf("%d\n", product);
	}

	else
		printf("Error\n");
	return (1);
}
