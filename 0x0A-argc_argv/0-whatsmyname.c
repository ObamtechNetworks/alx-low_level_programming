#include <stdio.h>

/**
 * main - prints program's name, Entry point for all other program
 * @argc: returns the number of arguments passed to the command line
 * @argv: an array of the actual strings passed to the command line
 * Description: A program that prints its name followed by a new line
 *
 * Return: Alwyas 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
