#include <stdio.h>

/**
 * main - Entry point
 * @void: receives no parameter
 *
 * Description: A program that prints the size of variou data types
 * on the computer it is compiled and run on
 * using the printf function
 *
 * Authoer - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu btye(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
