#include <stdlib.h>
#include "dog.h"
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
	char *namecpy, *ownercpy;
	int len1 = 0, len2 = 0, i, j, l, m;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	for (i = 0; name[len1]; i++)
		len1++;
	for (j = 0; owner[len2]; j++)
		len2++;
	namecpy = malloc(sizeof(char) * len1 + 1);
	if (namecpy == NULL)
	{
		free(namecpy);
		return (NULL);
	}
	ownercpy = malloc(sizeof(char) * len2 + 1);
	if (ownercpy == NULL)
	{
		free(ownercpy);
		return (NULL);
	}
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (l = 0; l < len1; l++)
		namecpy[l] = name[l];
	namecpy[l] = '\0';
	for (m = 0; m < len2; m++)
		ownercpy[m] = owner[m];
	ownercpy[m] = '\0';
	dog->name = namecpy;
	dog->age = age;
	dog->owner = ownercpy;
	return (dog);
}
