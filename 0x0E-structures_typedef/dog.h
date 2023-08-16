#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a dog structure
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: a dog data structure with the name, age and owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
#endif
