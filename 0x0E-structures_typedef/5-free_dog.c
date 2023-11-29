#include "dog.h"
/**
 * free_dog - frees dog
 * @d: pointer to dog structure
 *
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	free(d);
}
