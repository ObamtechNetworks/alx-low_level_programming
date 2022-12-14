#include <stdio.h>
#include "main.h"
/**
 * _islower - checks character if it's a lowercase
 * @c: the parameter to check for
 * Return: Always 0.
 */
int _islower(int c)
{
	int a;

	a = _islower('c');
	_putchar(a + '0');
	a = _islower('H');
	_putchar(a + '0');
	a = _islower(23);
	_putchar(a + '0');
	a = _islower('t');
	_putchar(a + '0');
	_putchar('\n');
	return (0);
}
