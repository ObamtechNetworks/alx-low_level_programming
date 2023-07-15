#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints
* all possible combination of three-digit numbers
* followed by a new line (using putchar)
* the three digits must be different (not printed before)
* numbers should be printed in ascending order wrt above
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if ((i != 55) || (j != 56) || (k != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
