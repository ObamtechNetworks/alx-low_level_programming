#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks character if it's a lowercase
 * @a: the parameter to check for
 * Return: Always 0.
 */
int _isalpha(int a)
{

	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else if (isalpha(a))
	{
		return (1);
	}
	return (0);
}
