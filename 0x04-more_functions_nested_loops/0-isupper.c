#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to check for
 * Description: A function that checks if a character
 * is uppercase
 * Author: Ipadeola Michael Bamidele
 * Return: 1 if character is uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
