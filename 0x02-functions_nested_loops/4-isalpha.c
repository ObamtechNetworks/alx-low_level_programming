#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks character if it's a lowercase
 * @a: the parameter to check for
 * Return: Always 0.
 */
int _isalpha(int a)
{

	if (a >= 97 && a <= 122)
	{
		if (a >= 65 && a <= 90)
		{
			if (isalpha(a))
			{
				return (1);
			}
		}
	}
	return (0);
}
