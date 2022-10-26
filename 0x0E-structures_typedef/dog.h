#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
* struct dog - new structure
* @name: first element
* @age: second element
* @owner: third element
*
* Description: new structure of type dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
