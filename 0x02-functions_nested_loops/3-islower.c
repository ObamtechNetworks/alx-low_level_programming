#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	a = _islower('c');
	_putchar(a + '0');
	a = islower('H');
	_putchar(a + '0');
	a = islower(23);
	_putchar(a + '0');
	a = islower('t');
	_putchar(a + '0');
	_putchar('\n');
	return (0);
}
