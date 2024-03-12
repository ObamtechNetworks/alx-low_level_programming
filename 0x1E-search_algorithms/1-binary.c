#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array of integers
 * using the binary_search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is located
 * if value is not present in array or if array is NULL -1 is returned
 * You must print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray) (See example)
 * Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * SEarching in array: 0, 1, 2, 3
 * searching in array: 2, 3
 * Found 2 at index: 2
 */

int binary_search(int *array, size_t size, int value)
{
	/* set a counter */
	int left  = 0;
	int right = (int)size - 1;
	/*int length = (int)size;*/
	int middle;
	int i = 0;

	/* edge cases */
	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
			return (middle);
	}
	return (-1);
}
