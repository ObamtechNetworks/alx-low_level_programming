#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure describing a dog object
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: This structure defines a new type struct dog with above listed
 * members
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /*DOG_H */
