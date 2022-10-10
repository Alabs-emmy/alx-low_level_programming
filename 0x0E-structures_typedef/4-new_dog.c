#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - functions create a new struct dog
 * @name: name of dog in string
 * @age: age of dog in integer
 * @owner: name of dogs owner
 *
 * Return: Return a pointer to newly created  struct dog type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *dog2;

	dog2 = malloc(sizeof(dog_t));
	if (!(dog2))
		return (NULL);

	len_name = _strlen(name);
	dog2->name = malloc((sizeof(char) * len_name) + 1);
	if (!(dog2->name))
	{
		free(dog2);
		return (NULL);
	}

	dog2->name = _strcpy(dog2->name, name);
	len_owner = _strlen(owner);
	dog2->owner = malloc((sizeof(char) * len_owner) + 1);
	if (!(dog2->owner))
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}

	dog2->owner = _strcpy(dog2->owner, owner);
	dog2->age = age;

	return (dog2);
}


/**
 * _strcpy - copies the string to another destination
 * @dest: destination to copy string to
 * @src: destination to copy string from
 *
 * Return: returns pointer to new destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - counts the length of a string
 * @str: string to count
 *
 * Return: Returns length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
