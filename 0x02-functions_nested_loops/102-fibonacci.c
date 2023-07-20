#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @void: receives nothing
 * Description: A program that computes first
 * 50 fibonacci numbers, starting with 1 and 2
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long sum, fib1 = 0, fib2 = 1;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
