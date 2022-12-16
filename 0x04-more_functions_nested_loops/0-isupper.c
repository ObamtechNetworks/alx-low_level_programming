#include <main.h>
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: the parameter to check for
 * Return: 0 or 1 based on condition
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
