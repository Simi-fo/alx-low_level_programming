#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes the variable
 * of struct dog
 * @d: pointer to a struct dog to be initialized
 * @name: pointer to a char array representing the 
 * name of the dog
 * @age: float representing the age of the dog
 * @owner: pointer to the char array representing the
 * owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	d->name = name;
	d->age = age;
	d->owner = owner;
}
