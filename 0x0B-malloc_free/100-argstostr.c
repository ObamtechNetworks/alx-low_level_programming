#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * free_args - frees the memory
 * @argstostr: the argsto string functiom
 *
 * Return: void
 */
void free_args(char *argstostr)
{
	free(argstostr);
}
/**
 * argstostr - function that concatenates all arguments of your program
 * @ac: the argument counts
 * @av: returns a pointer to array of characters
 * Description: A function that concatenates all arguments of your program
 * command line arguments, each string followed by a new line
 *
 * Return: NULL if ac == 0 or av == NULL, pointer to new string on success
 * NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int row, cols, i, length = 0, count;
	char *new_string;
	/*set condition for cases */
	if (ac == 0 || av == NULL)
		return (NULL);

	/*calculate the length of the argument (strings) */
	for (row = 0; row < ac; row++)
	{
		for (i = 0; av[row][i] != '\0'; i++)
			length++;
		length++; /*add one byte for new line*/
	}
	length++; /* add one byte for null character */

	/*allocate space for new string */
	new_string = (char *)malloc(sizeof(char) * length);
	/* HANDLE MALLOC FAILURE */
	if (new_string == NULL)
		return (NULL);

	count = 0; /*keep track of each position of the string */
	for (row = 0; row < ac; row++)
	{
		for (cols = 0; av[row][cols] != '\0'; cols++)
			new_string[count++] = av[row][cols];
		/*the above add string and leave space for new line at end*/
		/*add the new string and leave space for next string above*/
		new_string[count++] = '\n';
	}
	/* add the null terminator */
	new_string[count] = '\0';

	return (new_string);
}
