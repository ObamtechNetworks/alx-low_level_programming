#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * using the linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 * Return:` first index where value is located
 * if value is not present in array or if array is NULL -1 is returned
 * Everytime a comparison is made, the value must be printed in this format
 * Value checked array[index] = [TheValue]
 */

int linear_search(int *array, size_t size, int value)
{
	/* set a counter */
	int index  = 0;
	int length = (int)size;

	/* edge cases */
	if (!array)
		return (-1);

	while (index < length)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
