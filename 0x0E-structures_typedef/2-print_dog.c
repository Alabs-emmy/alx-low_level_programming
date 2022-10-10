#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the variable of type struct dog
 *
 * Return:prints the element of variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		d->name != NULL ? d->name : "(nil)",
		d->age,
		d->owner != NULL ? d->owner : "(nil)");
	}
}
