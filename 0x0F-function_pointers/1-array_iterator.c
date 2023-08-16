#include <stdio.h>
/**
 * array_iterator - a fxn that executes a function given as a param on arr menb
 * @array: the array list to perform action on
 * @size: the size of the array
 * @action: the pointer to the fxn to execute actions on the array elements
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	/*check for edge cases */
	if (array != NULL && action != NULL)
		/*points to the funtion -> print*/
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
}
