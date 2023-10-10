#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initailizes variables of struct dog
 * @d: pointer to struct dog
 * @name: element1 of dog
 * @age: element2 of dog
 * @owner: element3 of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
