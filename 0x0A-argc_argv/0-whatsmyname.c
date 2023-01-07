#include <stdio.h>
/**
 * main - entry point
 * @argc: stands for argument counts the number of arguments
 * passed to the program
 * @argv: stands for argument variable,
 * an array of strings of arguments passed to the program
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	printf("My name is %s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
	}
		else
		{
			printf("command had no other arguments. \n");
		}
	return (0);
}
