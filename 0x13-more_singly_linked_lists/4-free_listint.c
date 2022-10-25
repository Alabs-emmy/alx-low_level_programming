#include "lists.h"

/**
 * free_listint - function frees a listint_t
 * @head: head pointer to the nodes
 *
 * Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
