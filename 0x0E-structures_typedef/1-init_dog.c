#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes dog data structure
 * @d: the dog data structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
