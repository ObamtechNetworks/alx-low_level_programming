#include <stdio.h>

/**
* main - Entry point
* @void: receives nothing
* Description: A program that prints all single
* digits numbers of base 10 starting from 0
* followed by a new linee
* Author - Ipadeola Michael Bamidele
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
