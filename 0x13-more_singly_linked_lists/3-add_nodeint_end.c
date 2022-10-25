#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of listint_t
 * @head: pointer that points to the head pointer that points to the node
 * @n: integer
 *
 * Return: returns the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
		EXIT_FAILURE;
	}
	new->n = n;
	new->next = NULL;

	ptr = *head;
	if (ptr == NULL)
		ptr = new;
	else
	{
		while (ptr != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
