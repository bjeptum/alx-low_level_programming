#include "dog.h"
/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: d
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* reserve memory to struct */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	if (name == NULL)
	{
		free(d);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(d);
		free(name);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

