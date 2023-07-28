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
	int i = 0;

	while (str[i] != '\0')
	{
		if (ispunct(str[i]) || isblank(str[i]) || str[i] == '\n' ||
				str[i] == '{' || str[i] == '}' || str[i] == '(' || str[i] == ')')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		else
			str[i + 1] = tolower(str[i + 1]);
		i++;
	}
	str[i] = tolower(str[i]);

	return (str);
}
