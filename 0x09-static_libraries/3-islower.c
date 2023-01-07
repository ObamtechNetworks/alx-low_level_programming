#include <stdio.h>
#include "main.h"
/**
 * _islower - checks character if it's a lowercase
 * @a: the parameter to check for
 * Return: Always 0.
 */
int _islower(int a)
{

	if (a > 97 && a <= 122)
	{
		return (1);
	}
	return (0);
}
