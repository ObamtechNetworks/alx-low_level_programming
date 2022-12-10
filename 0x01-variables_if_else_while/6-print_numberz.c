#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
