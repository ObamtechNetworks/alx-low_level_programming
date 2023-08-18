#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/*struct protoptype for the cases */

/**
 * struct format - Short description
 * @fmt: the format  and type to check for
 * @print_arg: a pointer to the function to print the corresponding type
 * Description: This structure contains the cases for the different
 * types and format specifier when printing arguments
 * once a match is found, the function pointer points to the actual function
 * which outputs the argument based on the given format
 */
typedef struct format
{
	char *fmt;
	void (*print_arg)(va_list);
} check_format;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
/*for the function pointers for format specifiers */
void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif /*VARIADIC_FUNCTIONS_H */
