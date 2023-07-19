#include "main.h"

/**
 * print_alphabet_x10 - function name
 * @int - the alphabet variable
 * @i - the counter variable
 * Description: A function that prints the alphabet in
 * lowercase 10X followed by a new line
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int lower = 97, i = 1;

	while (i < 11)
	{
		while (lower < 123)
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');
		lower = 97;
		i++;
	}
}
