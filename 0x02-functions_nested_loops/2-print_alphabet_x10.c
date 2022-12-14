#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - make the alphabets x10
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
