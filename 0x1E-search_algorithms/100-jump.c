#include "search_algos.h"

/**
 * min - returns min value between two elmenets
 * @a: the first element
 * @b: the second element
 * Return: the minimum value
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 * jump_search - function that searches for a value in an array of integers
 * using the binary_search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is located
 * if value is not present in array or if array is NULL -1 is returned
 * You must print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray) (See example)
 * Value checked array[0] = [0]
 * Value checked array[3] = [3]
 * Value found between indexes [3] and [6]
 */

int jump_search(int *array, size_t size, int value)
{
	/* set a counter */
	int low  = 0;
	int length = (int)size;
	int jump_step = sqrt(length);
	int search_block = jump_step; /*initialize search_block*/
	int i = 0;

	/* edge cases */
	if (!array || !size)
		return (-1);

	/* try to loop through the list but based on the jump_step length*/
	/* also basedon the length of the array*/
	while (low < length && array[low] < value)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low += jump_step;
		/* select the min value between low + jump_step and length*/
		search_block = min(low + jump_step, length);
	}
	/* check if there was a search block found, using normal linear search*/
	printf("Value found between indexes [%d] and [%d]\n", low - jump_step, low);
	for (i = low - jump_step; i < search_block; i++)
	{
		/* normal linear search*/
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
