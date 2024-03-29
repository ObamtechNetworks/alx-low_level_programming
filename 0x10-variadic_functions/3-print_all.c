#include "variadic_functions.h"
/**
 * print_char - function that prints characters
 * @args: argument to print
 * Return: nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - function that prints integers
 * @args: argument to print
 * Return: nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - function that prints floats
 * @args: argument to print
 * Return: nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - function that prints characters
 * @args: argument to print
 * Return: nothing
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	s == NULL ? printf("%s", "(nil)") : printf("%s", s);
}

/**
 * print_all - prints anything given
 * @format: the format of what to print
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	/*array of struct of formats */
	check_format check[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	/*other local variables */
	int i, j = 0, found = 0;
	/*begin variable argument list for iteration*/
	va_list args;

	va_start(args, format); /*retrieve argumets based on format*/

	/*use a while loop to loop through the given arguments */
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (check[i].fmt != NULL && format != NULL)
		{
			if (format[j] == *(check[i].fmt))
			{
				found == 1 ? printf(", ") : (found = 0);
				check[i].print_arg(args);
				found = 1; /*set match to true to fmt rest*/
				break;
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
