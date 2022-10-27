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

/**
* struct dog_t - new struct
* @name: first element
* @age: second element
* @owner: third element
*
* Description: a structure of type dog_t
*/
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
