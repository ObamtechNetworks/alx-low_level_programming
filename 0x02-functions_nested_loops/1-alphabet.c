#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;
	for(letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
