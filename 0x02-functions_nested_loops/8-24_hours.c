#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of Jack Bauer
 * @void: receives nothing
 * Description: A function that prints every minute of Jack Bauere
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar(10);
		}
	}
}
