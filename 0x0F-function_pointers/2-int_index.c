#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 * @array: the list of integers to search from
 * @size: the size or length of the list (array)
 * @cmp: a pointer to the function which does the actual search logics
 * Return: -1 if no element or if size <= 0 else return index of found element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0; /* for looping around the list to make comparisons */
	int found_index = 0; /* index of the found element after comparison*/
	/*check for edge cases */
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) > 0)
			{
				found_index = i;
				break;
			}
			else
				found_index = -1;
			i++;
		}
	}
	return (found_index);
}
