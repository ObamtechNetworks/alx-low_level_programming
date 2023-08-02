#include <stdio.h>
#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: a double pointer variable to a char type
 * @to: a normal pointer variable to a char type
 * Description: A function that sets the value of a pointer toa  char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
