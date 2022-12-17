#include "main.h"
#include <stdio.h>
/**
 * main - finds and prints largest prime factor
 * Return: 0 Always (Success)
 */
int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
