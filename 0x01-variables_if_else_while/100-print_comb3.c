#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints
* all possible combination of two-digit numbers
* followed by a new line (using putchar)
* the two digits must be different
* numbers should be printed in ascending order wrt above
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if ((i != 56) || (j != 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
