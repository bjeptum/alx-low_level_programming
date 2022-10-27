#include "dog.h"
/**
* free_dog - frees malloc'ed memory spaces
* @d: variable of type dog_t
* Return: d
*/
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	free(d);
}
