#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if a letter is an alphabet or not
 * @c: integer parameter for the function
 * Description: A function that checks if a character
 * is alphabetic or not
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
