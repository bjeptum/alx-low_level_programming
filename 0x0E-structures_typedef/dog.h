#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - new type structure
* @name: first element, char
* @age: second element, float
* @owner: third element, char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
