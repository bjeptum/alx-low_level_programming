#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

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
/**
 * dog_t - new name for type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
