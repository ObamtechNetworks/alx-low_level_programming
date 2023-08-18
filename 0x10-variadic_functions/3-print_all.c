#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - a function that prints anything
 * @format: a list of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	/* declare local variables */
	unsigned int i = 0;
	const char *str;
	char *string;
	typedef struct check
	{
		char *case1;
		char fmt;
	} check_cases;
	check_cases cases[] = {
		{"%c", 'c'},
		{"%i", 'i'},
		{"%f", 'f'},
		{"%s", 's'}
	};
	/*invoke macro to start iterating variable arguments */
	va_list args;
	/* begin retrieve the listed arguments follwing last arg pattern*/
	va_start(args, format);
	str = format;
	while (*str != '\0')
	{
		while (cases[i].case1 != NULL)
		{
			if (strcmp(str, cases[i].case1) == 0)
			{
				switch (cases[i].fmt)
				{
					case 'c':
						printf(cases[i].case1, va_arg(args, int));
						break;
					case 'i':
						printf(cases[i].case1, va_arg(args, int));
						break;
					case 'f':
						printf(cases[i].case1, va_arg(args, double));
						break;
					case 's':
						string = va_arg(args, char *);
						if (string == NULL)
							string = "(nil)";
						printf(cases[i].case1, string);
						break;
				}
				break;
			}
			i++;
		}
		str++; /*traverse to the next character */
	}
	va_end(args);
	printf("\n");
}
