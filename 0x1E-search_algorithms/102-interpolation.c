#include "search_algos.h"
/**
 * interpolation_search - func that searches for a value
 * using interpolation_search algorithm
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the element to search for
 * Return: the index of the searched element
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (!array || !size)
		return (-1);

	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%u]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
