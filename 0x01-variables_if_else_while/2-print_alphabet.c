#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints the alphabets
* in lowercase followed by a new line
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
