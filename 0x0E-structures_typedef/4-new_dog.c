#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog instance
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 * Return: pointer to type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
