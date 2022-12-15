#include <stdio.h>
#include "main.h"
/**
 * main - prints all natural numbers which are multiples of 3 pr 5 .
 * @void: this function receives nothing
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
