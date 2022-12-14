#include <stdio.h>
#include "main.h"
/**
 *main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			_putchar('\n');
		}
		i++
	}
}
