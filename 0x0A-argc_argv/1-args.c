#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: returns the number of arguments passed to the command line
 * @argv: an array of the actual strings passed to the command line
 * Description: A program that prints the number of arguments passed into it
 *
 * Return: Alwyas 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
		return (printf("%d\n", 0));

	printf("%d\n", argc - 1);

	return (0);
}
