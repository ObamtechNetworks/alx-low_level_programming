#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs (allocatd in memory)
 * @d: the dog struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	dog_t *dog = d;

	if (dog != NULL)
	{
		if (d->name != NULL)
			free(dog->name);
		if (d->owner != NULL)
			free(dog->owner);
		free(dog);
	}
}
