#include "main.h"

/**
 * init_dog - function initializes a variable of type struct dog
 * @d: pointer to variable of type struct dog to initialize
 * @name: name of dog of type string
 * @age: age of dog of type integer
 * @owner: name of dog owner's of type string
 *
 * Return: Returns a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
