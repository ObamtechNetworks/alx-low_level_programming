#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: The character to check for
 * Description: A function that checks if a character
 * is a digit
 * Author: Ipadeola Michael Bamidele
 * Return: 1 if character is uppercase 0 if otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
