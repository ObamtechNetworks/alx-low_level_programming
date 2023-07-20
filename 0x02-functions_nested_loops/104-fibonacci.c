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
	int first = 1;
	int second = 2;
	int count = 98;

	printf("%d, %d", first, second);
	for (int i = 3; i <= count; i++)
	{
		int next = first + second;

		printf(", %d", next);
		first = second;
		second = next;
	}
	putchar('\n');
	return (0);
}
