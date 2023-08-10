#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the pointer to the allocated memory
 *
 * Return: on failure, causes normal process termination
 * with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	/* allocate the memory using malloc */
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}

