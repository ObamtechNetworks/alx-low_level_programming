#include <stdio.h>

/**
 * _atoi - A function that converts a string to an integer
 * @s: a pointer to the string to convert
 * Description: A function that converts a string to an integer
 * Author - Ipadeola Michael Bamidele
 * Return: the pointer to dest
 */

char *_atoi(char *s)
{
	int n = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= 's')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sign);
}
