#include <string.h>
#include "main.h"
/**
 * puts2 - a function that prints only one chcaracter out of two
 * @str: the string pointer variable
 * Return: this function returns nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
