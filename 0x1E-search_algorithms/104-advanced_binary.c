#include "search_algos.h"
/**
 * advanced_binary - function that searches for a value in an array of integers
 * using advanced binary_search algorithm
 * where if elements appears more than once, index of first is returned
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: first index where value is located
 * if value is not present in array or if array is NULL -1 is returned
 * You must print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray) (See example)
 * Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * SEarching in array: 0, 1, 2, 3
 * searching in array: 2, 3
 * Found 2 at index: 2
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* set a counter */
	int left;
	int right;
	int middle;
	int i, result;

	/* edge cases */
	if (!array || size == 0)
		return (-1);

	left = 0;
	right = (int)size - 1;
	middle = (left + right) / 2;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
		else
			printf("\n");
	}

	if (array[middle] == value)
	{
		result = advanced_binary(array, middle, value);
		return (result != -1 ? result : middle);
	}
	else if (array[middle] < value)
	{
		result = advanced_binary(&array[middle + 1],
					size - (middle + 1), value);
		return (result != -1 ? result + middle + 1 : -1);
	}
	else
	{
		return (-1);
	}
}
