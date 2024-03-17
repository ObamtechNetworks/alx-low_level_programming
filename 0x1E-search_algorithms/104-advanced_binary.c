#include "search_algos.h"

/**
* advanced_binary_recursive - Recursive function to perform binary search
* @array: Pointer to the first element of the array
* @left: Index of the left boundary of the subarray
* @right: Index of the right boundary of the subarray
* @value: Value to search for in the array
*
* Return: Index of the leftmost occurrence of @value in @array, or -1 if !found
*/

int advanced_binary_recursive(int *array, int left, int right, int value)
{
	int middle, duplicate_left, i;

	if (left <= right)
	{
		middle = left + (right - left) / 2;

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
			duplicate_left = middle;
			while (duplicate_left > left && array[duplicate_left - 1] == value)

				duplicate_left--;
			return (duplicate_left);
		}
		else if (array[middle] < value)
		{
			return (advanced_binary_recursive(array, middle + 1,
						right, value));
		}
		else
		{
			return (advanced_binary_recursive(array, left, middle - 1, value));
		}
	}
	return (-1);
}

/**
* advanced_binary - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array
* @size: Number of elements in @array
* @value: Value to search for in the array
*
* Return: Index of the leftmost occurrence of @value in @array, or -1 if !found
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, (int)size - 1, value));
}
