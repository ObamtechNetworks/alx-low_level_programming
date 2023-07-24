#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: a pointer to the string to evaluate its length
 * Description: A function that takes in pointer to a string
 * and then returns its length
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
