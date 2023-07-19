#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of an int
 * @number: receives any integer as argument
 * last_digit: computed last digit of the int
 * Description: A function that prints the
 * last digit of an integer
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int print_last_digit(int number)
{
	int last_digit;

	number = number % 10;
	last_digit = _putchar(number + '0');

	return (last_digit);
}
