#include "lists.h"

/**
 * lisy_len - function returns the number sof element in a linked list
 * @h: head pointer to the first node
 *
 * Return: Returns the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return ((unsigned long int)NULL);

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
