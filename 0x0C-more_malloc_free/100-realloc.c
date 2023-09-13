#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: the memory address to reallocate
 * @old_size: the old size of the memory address to resize
 * @new_size: the new size to add to the previous size
 * Description: A function that reallocates a memory block using malloc&free
 * This is actually a custom realloc function
 *
 * Return: on failure, RETURNS NULL, else allocates new memory based on
 * how realloc function itself works
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*create local variable, and pointer to new size */
	unsigned int i;
	char *new_ptr, *prev_ptr;

	if (ptr == NULL)
	{
		malloc(new_size);
	}
	/*set conditions */
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		new_ptr = malloc(new_size);

	prev_ptr = ptr;
	/*copy to new_size old size based on range*/
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = prev_ptr[i];

	/*FREE POINTER */
	free(ptr);
	return (new_ptr);
}
