#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * @n - The integer variable that returns
 * a random value at runtime
 * Description: A program that assigns random
 * numbers to a variable
 * and checks if it is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
