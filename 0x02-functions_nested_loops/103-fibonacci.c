#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @void: receives nothing
 * Description: A program that computes
 * the sum of even values of fibonacci numbers
 * starting with 1 and 2
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int main(void)
{
	float total;
	unsigned long sum, fib1 = 0, fib2 = 1;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
