#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog parameters
 * struct dog - the structure
 * @d: pointer to dog
 * @name: the name of the dog
 * @age: age in years
 * @owner: owner of the dog
 * Return: always 0
 *
 * Description: pointer to a struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));


	d->name = name;
	d->age = age;
	d->owner = owner;

}
