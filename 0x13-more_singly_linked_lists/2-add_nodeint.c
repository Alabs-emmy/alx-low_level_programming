#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a
 *		listint_t list
 * @head: pointer to the head pointer that points to the nodes
 * @n: integer
 *
 * Return: returns the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
		exit(90);
	}
	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (new);
}

