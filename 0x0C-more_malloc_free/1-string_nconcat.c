#include <stdlib.h>
#include "main.h"
/**
 * get_length - get lengths of a string
 * @str: the string to calculate its length
 *
 * Return: length of the string
 */
unsigned int get_length(char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}
/**
 * string_nconcat - a function that concatenates two string
 * @s1: the first string
 * @s2: the second string
 * @n: the n bytes from s2 to concatenate
 * Description: a function that concatenates two string and save in memory
 *
 * Return: NULL if fails, else pointer to the new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*create the local variables and address (pointer) for memory*/
	unsigned int i, len_s1, j;
	char *str;

	/* set the start conditons */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* if n is greater or equal to length of s2, use entire string s2*/
	if (n >= get_length(s2))
		n = get_length(s2);

	/*get length of s1*/
	len_s1 = get_length(s1);
	/*allocate memory for dest string with space for null byte*/
	str = malloc(sizeof(char) * (len_s1 + n + 1));
	/** malloc failure */
	if (str == NULL)
		return (NULL);
	/* fill values of s1 to new string*/
	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	/*concatenate values of s2 to new space with reference to n*/
	for (j = 0; j < n; j++)
		str[len_s1 + j] = s2[j];
	/* add null byte */
	str[len_s1 + n] = '\0';
	/* => len_s1 + len_s2 is to add the null byte at the end of str */

	/* return pointer (new allocated space in memory)*/
	return (str);
}
