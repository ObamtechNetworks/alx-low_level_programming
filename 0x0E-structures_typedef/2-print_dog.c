#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a "struct dog" type
 * @d: pointer to the addrss of the struct type to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	/*check if d is NULL */
	if (d != NULL)
	{
		/*print d elments */
		if (d->name == NULL || d->age <= 0 || d->owner == NULL)
			printf("(nil)\n");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

	if (d == NULL)
		return;
}
