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
	/*print d elments */
	if (d->name == NULL)
		printf("(nil)\n");
	if (d->age <= 0)
		printf("%f\n", 0.0);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

	if (d == NULL)
		return;
}
