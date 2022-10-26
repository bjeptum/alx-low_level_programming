#include "dog.h"
/**
* print_dog - prints struct dog
* @d:variable of type struct dog
* Return: Always 0
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		printf("Name: (nil)\nAge: (nil)\nOwner: (nil)\n");
}


