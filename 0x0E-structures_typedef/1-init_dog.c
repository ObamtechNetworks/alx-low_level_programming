#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initializes a variable of type "struct dog"
 * @d: pointer to the addrss of the struct type to initialize
 * @name: pointer to the name element of struct type
 * @age: the age element of the struct type
 * @owner: pointer to the owner element of the struct type
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
	{
		printf("Invalid name\n");
		return;
	}

	if (age <= 0)
	{
		printf("Invalid age\n");
		return;
	}

	if (owner == NULL)
	{
		printf("Invalid owner\n");
		return;
	}

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
