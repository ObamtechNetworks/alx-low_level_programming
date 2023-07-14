#include <stdio.h>

/**
 * main - Entry point
 * @void: receives no parameter
 *
 * Description: A program that prints the size of various data types
 * on the computer it is compiled and run on
 * using the printf function
 *
 * Authoer - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	char c;
	long long int d;
	float e;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu btye(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
