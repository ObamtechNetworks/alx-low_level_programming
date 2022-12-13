#include <stdio.h>
#include "_putchar.c"
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *putchar = "_putchar";

	while(putchar)
	{
		_putchar(*putchar);
		putchar++;
	}
	_putchar('\n');
	return (0);
}
