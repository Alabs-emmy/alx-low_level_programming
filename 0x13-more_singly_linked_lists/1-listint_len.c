#include "lists.h"

/**
 * listint_len - prints the number of element ina linked list
 * @h: head pointer to the nodes
 *
 * Return: returns number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
