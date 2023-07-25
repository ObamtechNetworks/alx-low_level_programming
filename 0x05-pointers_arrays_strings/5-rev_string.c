#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - A function that reverses a string
 * @s: a pointer to the string of characters to reverse
 * Description: A function that reverses a string
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;/* capture first char */
	int j = strlen(s) - 1; /* capture last char */
	int temp;/* a temp variable for swaping first and last char*/

	while (i < j)/* first char less than last char */
	{
		temp = s[i];/* put chars on left (first) into temp */
		s[i] = s[j]; /* swap last char and set as first */
		s[j] = temp; /* set first chars in temp to last */

		j--; /* move to the left from right */
		i++; /* move to the right from left */
	}
}
