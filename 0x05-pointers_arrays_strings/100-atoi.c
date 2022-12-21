#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - a function that converts a string to an integer
 * @s: the string to convert
 * Return: returns string
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (sign * res);
}
