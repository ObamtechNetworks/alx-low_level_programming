#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive integers
 * @argc: returns the number of arguments passed to the command line
 * @argv: an array of the actual strings passed to the command line
 * Description: A program that adds positive integers passed to the commandliin
 *
 * Return: Alwyas 0 (success)
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0, to_digits;
	/* if no arguments */
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	/* if there are arguments */
	/*loop through the characters */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/*check if the character passed in is not a digit */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		to_digits = atoi(argv[i]);
		sum += to_digits;
	}
	printf("%d\n", sum);
	return (0);
}
