#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(d));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
