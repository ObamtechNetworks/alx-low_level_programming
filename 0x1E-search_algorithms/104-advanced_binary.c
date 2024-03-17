#include <stdio.h>
#include <stdlib.h>
/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 if not present or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int index, result;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	if (size == 1)
	{
		return (array[0] == value ? 0 : -1);
	}
	if (size == 2)
	{
		if (array[0] == value)
			return (0);
		if (array[1] == value)
			return (1);
	}
	index = size / 2;
	if (array[index] == value)
	{
		if (size == 1 || array[index - 1] != value)
			return (index);
	}
	if (array[index] < value)
	{
		result = advanced_binary(array + index + (size % 2 ? 1 : 0),
				size / 2, value);
		return (result == -1 ? -1 : index + result +
				(size % 2 ? 1 : 0));
	}
	return (advanced_binary(array, size / 2, value));
}
