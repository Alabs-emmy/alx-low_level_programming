#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure definition of a dog
 * @name: dog name in string
 * @age: dog age in figure
 * @owner: dog owner's name in string
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* _DOG_H_ */
