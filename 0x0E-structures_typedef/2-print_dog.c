#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if ( d != NULL)
	{
		printf( "Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
