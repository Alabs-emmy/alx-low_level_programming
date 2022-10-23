#include "lists.h"

/**
 * free_list - function that frees a struture
 * @head: pointer to head node
 *
 * Return: Returns nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp
	}

}
