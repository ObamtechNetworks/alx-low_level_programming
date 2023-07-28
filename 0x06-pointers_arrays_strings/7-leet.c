#include <stdio.h>

/**
 * leet - A fxn that encondes a string into 1337
 * @str : a pointer to the string to encode
 * Description: A function that encodes a string into 1337
 * Author - Ipadeola Michael Bamidele
 * Return: return pointer to the changed strings
 */

char *leet(char *str)
{
	int i,j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				continue;
			}
		}
	}
	return (str);
}
