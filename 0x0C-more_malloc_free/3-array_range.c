#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers in memory
 * @min: the start value for the integers
 * @max: the limit (end) for the integers
 * Description: a function that creates an array of integers
 * starting from min to max
 *
 * Return: NULL on failure, if min > max, returns NULL else
 * a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	/*create local variables */
	int *array;
	int i;

	/*set start conditions */
	if (min > max)
		return (NULL);

	/*create size in memory */
	array = malloc((max - min + 1) * sizeof(int));

	/* malloc failure */
	if (array == NULL)
		return (NULL);

	/* set values of array members from min to max */
	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
