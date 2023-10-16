#include <stdio.h>
#include <stdbool.h>

/**
 * _atoi - A function that converts a string to an integer
 * @s: a pointer to the string to convert
 * Description: A function that converts a string to an integer
 * Author - Ipadeola Michael Bamidele
 * Return: the pointer to dest
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	/* Skip leading whitespaces */
	while (s[i] == ' ')
	{
		i++;
	}
	/* Check for sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	/* Convert characters to integer until a non-digit character is encountered */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
