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
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u btye(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
