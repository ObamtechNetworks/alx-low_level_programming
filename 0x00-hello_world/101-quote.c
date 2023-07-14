#include <unistd.h>

/**
 * main - Entry point
 * @void: receives no parameter
 *
 * Description: A program that prints exactly
 * 'and that piece of art is useful\" - Dora Korpar, 2015-10-19'
 * to the standard error using write function
 * write (int fd,const void *buf,size_t count)
 *
 * Author - Ipadeola Michael Bamidele
 * Return: Always 1 (failed)
 */

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
