#include <stdio.h>
/**
* main - Entry point
* @void: recieves nothing
* Description: a program that prints
* first 98 fibonacci numbers
* Authoer - Ipadeola Bamidele Michael
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum, count;

	printf("%lu, %lu, ", fib1, fib2);
	for (count = 2; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
