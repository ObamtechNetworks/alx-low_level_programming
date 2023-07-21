#include <stdio.h>
/**
 * _sqrt - computes square root of a number
 *
 * @n: the number to compute
 *
 * Return: square root of n
 */
double _sqrt(double n)
{
	float sqrt, tmp;

	sqrt = n / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}
/**
 * find_largest_prime - finds the largest
 * prime factor
 *
 * @num: - the number to test for
 */
void find_largest_prime(long int num)
{
	int prime, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prime = 3; prime <= _sqrt(num); prime += 2)
	{
		while (num % prime == 0)
		{
			num = num / prime;
			largest = prime;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 * @void: receives nothing
 * Description: Prints prime factors of
 * 612852475143
 * Author: Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int main(void)
{
	find_largest_prime(612852475143);

	return (0);
}
