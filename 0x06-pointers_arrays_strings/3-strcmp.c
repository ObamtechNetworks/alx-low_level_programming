#include <stdio.h>
#include <string.h>

/**
 * _strcmp - A function that compares two strings
 * @s1: a pointer to the first string
 * @s2: pointer to the second string for comparison
 * Description: A function that compares two strings
 * Author - Ipadeola Michael Bamidele
 * Return: 0 if same, > 0 if s1 > s2, < 0 if s2 > s1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
