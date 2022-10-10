#include "dog.h"

/**
 * free_dog - frees memory allocated for dog
 * @d: pointer to variable of type struct dog
 *
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
