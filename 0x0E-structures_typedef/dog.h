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
/**
 * struct dog_t - new name for type struct dog
 * @name: member variable 1
 * @age: member variable 2
 * @owner: member variable 3
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
