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
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
