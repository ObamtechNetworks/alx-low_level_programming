#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i < 9; i++)
	{
		for (n = i + 1; n < 10; n++)
		{
			putchar((i % 10) + '0');
			putchar((n % 10) + '0');
			if (i == 8 && n == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
