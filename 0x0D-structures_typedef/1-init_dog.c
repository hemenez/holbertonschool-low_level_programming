#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function initializes structure variable
 * @d: represents pointer to structure
 * @name: represents name of dog
 * @age: represents age of dog
 * @owner: represents name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
