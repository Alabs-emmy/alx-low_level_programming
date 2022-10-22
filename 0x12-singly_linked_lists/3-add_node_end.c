#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to a pointer that points to the head node
 * @str: pointer to a string
 *
 * Return: Returns address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str1;
	list_t *ptr_new, last_node;

	if (!head)
		return (NULL);

	ptr_new = malloc(sizeof(list_t));

	if (!ptr_new)
		return (NULL);

	str1 = strdup(str);

	if (!str1)
	{
		free(ptr_new);
		return (NULL);
	}
	for (i = 0; str1[i] != '\0'; i++)
		;
	ptr_new->str = str1;
	ptr_new->len = i;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr_new;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = ptr_new;
	}
	return (*head)

