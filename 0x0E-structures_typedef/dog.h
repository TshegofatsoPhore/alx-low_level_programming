#ifndef DOG_H
#define DOG_H

/**
 * init_dog - initailizes variables of struct dog
 * @d: pointer to struct dog
 * @name: element1 of dog
 * @age: element2 of dog
 * @owner: element3 of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
