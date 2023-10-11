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
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
