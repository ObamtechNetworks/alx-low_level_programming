#include <stdio.h>

/**
 * _strspn - A fxn that gets the length of a prefix substring
 * @s: The string to search from
 * @accept: The substring prefix to search
 * Description: A function that gets the length of a prefix substring.
 * I.e: the function calculates how many matches of
 * the substring it can find in the main string
 * (the inital segment that matches)
 * the function stops to run once it encounters a character
 * that differs from the main string THAT IS NOT IN THE ACCEPT STRING
 * Return: The length of the matches found of the substring in the main string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i; /* counter to loop
		* through the accept substring
		*/
	unsigned int length = 0; /**
				   * this variable increments
				   * for every match found
				   * and is the final variable
				   * to be returned as length
				   * of total match found
				   */

	for (; s[length]; length++)
	{
		int isFound = 0; /**
				  * the variable to determine if
				  * to continue searching the main string or not
				  * Hence: the first prefix concept
				  */

		for (i = 0; accept[i]; i++) /**
					      * loop through the all substring to check
					      * possible match with
					      * current main string
					      */
		{
			if (s[length] == accept[i])
			{
				isFound = 1; /**
					       * this logic here
					       * tells the outerloop
					       * to continue to search
					       * the next character of
					       * the main string
					       * as long as
					       * a match exist
					       * while checking all
					       * of the substring
					       * with the current
					       * character of the
					       * main string
					       */
				break; /* exit this inner loop and
					     * move to check next
					     * character
					     */
			}
		}
		if (!isFound)
			break; /**
				 * end the outer loop
				 * when no match is found
				 */
		/**
		 * The function stops searching for characters
		 * in the main string once it encounters
		 * a character that is not in the accept string.
		 */
	}
	return (length);

}
