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
	void *new_ptr;
	unsigned int size_range;
	char *cast_ptr, *cast_new_ptr;

	/*set conditions */
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/*create new pointer that holds the new memory space*/
	new_ptr = malloc(new_size);
	/* HANDLE MALLOC FAILURE */
	if (new_ptr == NULL)
		return (NULL);

	/*create conditions on range of size to add */
	if (new_size > old_size)
		size_range = old_size;
	else
		size_range = new_size;

	/*cast the pointers for proper typecasting usage */
	cast_ptr = (char *)ptr;
	cast_new_ptr = (char *)new_ptr;

	if (ptr != NULL)
	{
		 /*copy to new_size old size based on range*/
		for (i = 0; i < size_range; i++)
			cast_new_ptr[i] = cast_ptr[i];
		/*FREE POINTER */
		free(ptr);
	}
	return (ptr);
}
