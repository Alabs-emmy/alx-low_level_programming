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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
#endif /* _DOG_H_ */
