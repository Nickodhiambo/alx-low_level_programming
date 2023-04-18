#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a dog structure
 * @d: A dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
