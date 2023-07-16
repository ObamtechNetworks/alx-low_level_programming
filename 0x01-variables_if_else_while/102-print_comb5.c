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
	int firstnum, secondnum;

	for (firstnum = 0; firstnum <= 99; firstnum++)
	{
		for (secondnum = firstnum; secondnum <= 99; secondnum++)
		{
			if (firstnum != secondnum)
			{
				putchar((firstnum / 10) + '0');
				putchar((firstnum % 10) + '0');
				putchar(' ');
				putchar((secondnum / 10) + '0');
				putchar((secondnum % 10) + '0');
				if ((firstnum != 98) || (secondnum != 99))
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
