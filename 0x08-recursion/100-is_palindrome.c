#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to check for
 * Description: A function that checks if a string is a palindrome
 * Return: 1 if a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s); /* gets lenghth of string to get last char*/

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - an aide to the is_palindrome function
 * @s: checks the string if a palindrome by performing some works on it
 * @start: the start of the string
 * @end: the end of the string
 * Description: reformats the string by removing all pucnts and space
 * convert all string to lowercase and then
 * do the check on each character
 * Return: 1 if a palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	/* start to compare the start and end */
	if (start >= end)
		return (1); /*a palindrome is found */

	/* skip non-alphanumeric characters and move the pointers */
	while (start < end && !is_alphanum(s[start]) && !isspace(s[start]))
		start++;
	while (start < end && !is_alphanum(s[end]) && !isspace(s[end]))
		end++;

	/* compare the characters while ignoring cases (upper or lower) */
	if (!ignore_case(s[start], s[end]))
		return (0); /* Not a palindrome */

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_alphanum - checks if a character is alphanumeric or not
 * @c: character to check for
 *
 * Return: boolean value
 */
int is_alphanum(char c)
{
	return (isalnum(c)); /* checks if a character is alphanumeric */
}

/**
 * ignore_case - ignores character cases
 * @a: first character
 * @b: second character
 *
 * Return: boolean value
 */
int ignore_case(char a, char b)
{
	return (tolower(a) == tolower(b)); /* compares the
					    * haracters ignoring cases
					    */
}
