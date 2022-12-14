#include "lists.h"

/**
 * print_list - prints all the elements of a struct
 * @h: pointer to the structure
 *
 * Return: Returns the number of node
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return ((unsigned long int)NULL);
	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
