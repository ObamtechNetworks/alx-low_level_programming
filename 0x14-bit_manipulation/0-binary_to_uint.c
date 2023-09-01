#include "main.h"
/**
 * binary_to_uint - converst a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number, or
 * 0 if there is one or more chars in string b
 * that is not 0 or 1 or when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	/*create variable to store return deci. value, and exp var*/
	unsigned int converted = 0, exp = 0;
	/*create a variable to get length of binary string & counter*/
	int length = 0, i;

	/*edge cases: NULL, "", 0*/
	if (b == NULL || *b == '\0')
		return (0);

	/*get the length of b and check for characters other than 0 and 1*/
	for (; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	/*convert the valid binary numbers to unsigned int starting frm right*/
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{/*if value is 0, skip and increase exponent & mv to next*/
			exp++;
			continue;
		}
		if (b[i] == '1')
		{/*if val is 1,get the exp val(calc contrbtn)&add 2 conv. var*/
			converted += 1 << exp;/*cal,d left shift equiv of exp*/
			exp++;
		}
	}

	return (converted);
}
