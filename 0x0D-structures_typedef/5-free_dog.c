#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - function will free memory
 * @d: represents pointer to structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
