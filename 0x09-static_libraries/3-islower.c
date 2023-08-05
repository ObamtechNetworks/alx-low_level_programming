#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if a letter is lowercase or uppercase
 * @c: integer parameter for the function
 * Description: A function that checks for a character if
 * it is lowercase or not
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
