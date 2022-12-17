#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers from 0 - 9
 * void: this function receieves ntoher
 * Return: 0 Always (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
