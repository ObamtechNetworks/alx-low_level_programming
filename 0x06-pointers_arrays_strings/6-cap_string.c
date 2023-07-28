#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - A fxn that captitalize each words
 * @str : a pointer to the word string to captitalize
 * Description: A function that capitalize words of string
 * Author - Ipadeola Michael Bamidele
 * Return: return pointer to the changed strings
 */

char *cap_string(char *str)
{
	int i;
	int length = strlen(str);
	int setNextToUpper = 1;

	for (i = 0; i < length; i++)
	{
		if (setNextToUpper && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			setNextToUpper = 0;
		}
		else if (strchr(" \t\n,;.!?\"(){}", str[i]))
		{
			setNextToUpper = 1;
		}
		else
			setNextToUpper = 0;
	}
	return (str);
}
