#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type dog
 * @d: pointer to struct that is to be initialized
 * @name:the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: the data structure  of a dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
