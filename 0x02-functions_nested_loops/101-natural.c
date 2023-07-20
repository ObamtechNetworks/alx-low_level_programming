#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @void: receives nothing
 * Description: A program that computes and printse
 * the sum of the multiples of 3 & 5 below 1023
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum, count;

	for (count = 0; count < 1024; count++)
		if ((count % 3 == 0) || (count % 5 == 0))
			sum += count;
	printf("%d\n", sum);
	return (0);
}
