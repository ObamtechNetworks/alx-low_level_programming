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
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - searches for an element using the exp. search algorithm
 * @array: pointer to the first element of the array to search for
 * @size: the size of the array
 * @value: the value to look for
 * Return: the index of the element to search for if in the array
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 0;
	int length = size;
	int result, upper_bound, lower_bound;

	if (!array || !length)
		return (-1);

	/*check first index*/
	if (array[i] == value)
	{
		return (i);
	}
	i++;

	while (i < length && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i / 2 != 2)
	{
		lower_bound = i / 2;
		upper_bound = i - 1;
	}
	else
	{
		lower_bound = (i / 2);
		upper_bound = i;
	}
	printf("Value found between indexes [%d] and [%d]\n",
			lower_bound, upper_bound);
	result = binary_search(&array[lower_bound],
			upper_bound - lower_bound + 1, value);
	if (result != -1)
	{
		result += lower_bound;
		return (result);
	}
	else
		return (result);
}
