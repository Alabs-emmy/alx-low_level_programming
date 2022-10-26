#include "lists.h"

/**
 * print_listint- function prints element of type listint_t(struct)
 * @h: head pointer to the first node
 *
 * Return: return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
