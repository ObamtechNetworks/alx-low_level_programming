#include <stdio.h>
/**
 * print_name - a function that prints a name via a function pointer
 * @name: the name to print
 * @f: a function pointer or pointer to a function which serves as callback
 * to do the actual printing of name when print_name calls it
 * Return: nothing
 */

void print_name(char *name, void(*f)(char *))
{
	/*check for edge cases */
	if (name == NULL)
	{
		printf("Enter a valid name");
		name = "";
	}

	/*points to the funtion -> print*/
	f(name);
}
