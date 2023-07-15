#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints
* all numbers of base 16 in lowercase
* followed by a new line (using putchar)
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	char letters;
	char digits;

	for (digits = 48; digits <= 57; digits++)
		putchar(digits);
	letters = 'a';
	while (letters < 'g')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
