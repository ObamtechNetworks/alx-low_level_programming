#include <stdio.h>
#include <limits.h>
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

	while (s[i] == ' ')
		i++;

	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		res = 10 * res + (s[i++] - '0');
	}
	return (res * sign);
}
