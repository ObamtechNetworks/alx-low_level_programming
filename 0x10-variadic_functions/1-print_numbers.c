#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints all numbers
 * @separator: the string separator to be printed between for the numbers
 * @n: the integer number to start printing
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare local variables */
	unsigned int i;
	unsigned int args_list;

	/*begin the macro to iterate variable arguments */
	va_list args;

	/* start the macro to retrieve the listed arguments follwing last arg*/
	va_start(args, n);

	/* start a loop to start printing the arguments (numbers) */
	for (i = 0; i < n; i++)
	{
		args_list = va_arg(args, unsigned int);
		printf("%d", args_list);

		/* print separator only after an argument */
		/* and also print separators only when it's not NULL*/
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	/* end variable arguments macro */
	va_end(args);

	/*print a new line */
	printf("\n");
}
