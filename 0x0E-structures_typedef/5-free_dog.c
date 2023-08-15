#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <ctype.h>

/**
 * free_dog - a function that frees dogs (allocatd in memory)
 * @d: the dog struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		free(d);
}
