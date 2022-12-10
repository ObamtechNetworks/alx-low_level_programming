#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int dec;
	int hex;

	for (dec = '0'; dec <= '9'; dec++)
	{
		putchar(dec);
		for (hex = 'a'; hex <= 'f'; hex++)
			putchar(hex);
		putchar('\n');
	}
	return (0);
}
