#include "main.h"
/**
 * leet - Encodes a string to 1337
 * @n: the string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *n)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == find[x])
			{
				n[i] = replacer[x / 2];
				x = 9;
			}
		}
	}
	return (n);
}
