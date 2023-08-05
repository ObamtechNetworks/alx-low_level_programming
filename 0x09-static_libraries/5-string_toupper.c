#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - A fxn that chnages all lowercase to upper
 * @str : a pointer that to character to change to lower
 * Description: A function that changes all lowercase
 * to uppercase
 * Author - Ipadeola Michael Bamidele
 * Return: return pointer to the changed strings
 */

char *string_toupper(char *str)
{
	char *ptrS = str;

	while (*ptrS != '\0')
	{
		if (*ptrS >= 'a' && *ptrS <= 'z')
			*ptrS = *ptrS - 'a' + 'A';
		ptrS++;
	}

	return (str);
}
