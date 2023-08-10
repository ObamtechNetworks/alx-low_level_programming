#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array custom calloc
 * @nmemb: the number of elements in the array
 * @size: the size of the array
 * Description: a custom calloc that allocates memory for an array and set
 * the memory to zero (each elements)
 *
 * Return: NULL on failure, if nmemb or size = 0, NULL is returned else
 * a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*create local variables */
	unsigned int i, arr_size;
	void *create_arr;
	char *cast_arr;

	/*set start conditions */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*create size in memory */
	create_arr = malloc(size * nmemb);

	/* malloc failure */
	if (create_arr == NULL)
		return (NULL);

	arr_size = nmemb * size;

	/* typecast void pointer */
	cast_arr = (char *)create_arr;
	/**
	 *  This type casting is needed so that we can
	 *  easily set the value of each integer to 0
	 *  since a char is 1 byte, so it is easy to
	 *  move 1 byte per step
	 */

	/* set values of the members to 0 */
	for (i = 0; i < arr_size; i++)
		cast_arr[i] = 0;

	return (create_arr);
}
