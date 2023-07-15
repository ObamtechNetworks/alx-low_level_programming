#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints
* all possible combination of single-digit numbers
* followed by a new line (using putchar)
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
