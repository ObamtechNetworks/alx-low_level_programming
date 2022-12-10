#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int dec;
	char hex;

	for (dec = 0; dec < 10; dec++)
		putchar((dec % 10) + '0');
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
