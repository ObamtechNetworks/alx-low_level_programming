#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all naturl numbers
 * from n to 98
 * @n: receives any integer as argument
 * Description: A function that prints
 * n natural numbers to 98
 * Author - Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n--);
			if (n > 97)
				printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
			if (n == 98)
				printf("%d", n);
		}
	}
	printf("\n");
}
