#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints all alphabets
* in lowercase in reverse order
* followed by a new line (using putchar)
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	char letters;

	for (letters = 122; letters >= 97; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
