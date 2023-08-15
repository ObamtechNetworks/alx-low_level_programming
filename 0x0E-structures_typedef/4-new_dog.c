#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stdio.h>
/**
 * _strdup - creates a pointer to a newly allocated space in memory
 * @str: the string to create a copy  of it in memory
 * Description: A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as parameter
 *
 * Return: NULL if str = NULL, else pointer to the new space
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *dup;
	/*care for when str == NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	/*allocate memory to duplicate str */
	dup = malloc(size * sizeof(char));
	/*handle malloc return if charAr is NULL */
	if (dup == NULL)
	{
		return (NULL);
		exit(1);
	}
	strcpy(dup, str);
	return (dup);
}
/**
 * new_dog- a function that creates a struct type dog
 * @name: pointer to the string element of the struct
 * @age: the age value (a float)
 * @owner: pointer to the string element
 * Return: the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog; /*CREATE NEW DOG STRUCT */

	if (name == NULL)
	{
		printf("(nil)\n");
		exit(1);
	}
	if (owner == NULL)
	{
		printf("(nil)\n");
		exit(1);
	}

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (dog != NULL)
	{
		dog->name = _strdup(name);
		dog->age = age;
		dog->owner = _strdup(owner);
	}
	return (dog);
}
