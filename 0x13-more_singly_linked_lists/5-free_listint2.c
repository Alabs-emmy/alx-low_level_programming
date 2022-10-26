#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer that points to the address of the head pointer
 *
 * Description: sets head to NULL.
 * Return: Returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
