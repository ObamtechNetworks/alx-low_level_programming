#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string separator to be printed between for the numbers
 * @n: the string to start printing from
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare local variables */
	unsigned int i;
	char *str_list;

	/*invoke macro to start iterating variable arguments */
	va_list args;

	/* begin retrieve the listed arguments follwing last arg pattern*/
	va_start(args, n);

	/* start a loop to start printing the arguments (numbers) */
	for (i = 0; i < n; i++)
	{
		/* to print string, typecast var_arg to a string*/
		str_list = va_arg(args, char *);

		if (str_list != NULL)
			printf("%s", str_list);
		else
			printf("(nil)");

		/* print separator only after an argument */
		/* and also print separators only when it's not NULL*/
		if ((i < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	/* end variable arguments macro */
	va_end(args);

	/*print a new line */
	printf("\n");
}
