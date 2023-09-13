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
	/*create variables*/
	unsigned int i;
	/*pointer for copying old space to new space if required*/
	char *new_ptr, *prev_ptr;

	/*if pointer is NULL, ALLOC size based on new size*/
	if (ptr == NULL)
		return (malloc(new_size));

	/*if new_size is same and old, return the pointer*/
	if (new_size == old_size)
		return (ptr);

	/*if new size is 0 and ptr has some space, then free ptr*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* else, allocate buffer for new ptr*/
	new_ptr = malloc(new_size);
	/*save prev_ptr address*/
	prev_ptr = ptr;

	/*copy to new_size old size based on range*/
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = prev_ptr[i];

	/*FREE POINTER */
	free(ptr);
	return (new_ptr);
}
