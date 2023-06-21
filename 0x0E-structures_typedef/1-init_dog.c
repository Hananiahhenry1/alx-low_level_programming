#include "dog.h"
/**
 * init_dog - entry point
 * @d: initialze
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0 always
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
