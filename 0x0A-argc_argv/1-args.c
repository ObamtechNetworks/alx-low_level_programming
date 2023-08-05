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
	int n = 0;
	(void)argv;

	if (argc > 1)
	{
		n = argc - 1;
	}
	else
		n = 0;
	printf("%d\n", n);
	return (0);
}
