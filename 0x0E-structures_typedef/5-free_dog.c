#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs (allocatd in memory)
 * @d: the dog struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
