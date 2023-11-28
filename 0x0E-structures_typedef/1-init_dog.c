#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @name: element variable 1
 * @age: element variable 2
 * @owner: element variable 3
 * @d: pointer to structure
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
