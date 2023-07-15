#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints the alphabets
* in lowercase, except q and e
* followed by a new linee
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
