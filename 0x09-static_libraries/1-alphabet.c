#include "main.h"

/**
 * print_alphabet - function name
 * @int - the alphabet variable
 * Description: A function that prints the alphabet in lowercase
 * followed by a new line
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int lower = 97;

	while (lower < 123)
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
