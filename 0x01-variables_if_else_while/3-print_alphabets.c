#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints the alphabets
* in lowercase, and then in uppercase
* followed by a new linee
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	char lower;
	char upper = 'A';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
