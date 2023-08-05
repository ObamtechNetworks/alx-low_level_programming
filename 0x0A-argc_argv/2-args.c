#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: returns the number of arguments passed to the command line
 * @argv: an array of the actual strings passed to the command line
 * Description: A program that prints all arguments it receives
 *
 * Return: Alwyas 0 (success)
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
