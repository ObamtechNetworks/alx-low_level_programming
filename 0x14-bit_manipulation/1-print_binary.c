#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print it's binary representation
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	/*using recursive method*/
	/*recursively right shift the number, till zero*/
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n > 0)
		{
			print_binary(n >> 1);
			if (n & 1)/*bitwise & of the value, to return 1 if true*/
				_putchar('1');
			else
				_putchar('0');/*else prints 0*/
		}
	}
}
