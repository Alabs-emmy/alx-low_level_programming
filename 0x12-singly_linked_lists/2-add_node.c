#include "lists.h"

/**
 * add_node - function adds a new node to the begining of a list
 * @head: pointer to the pointet that points to the address of a node
 * @str: pointer to the string
 *
 * Return: Returns the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	char *str1;
	list_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	str1 = strdup(str);
	if (str1 == NULL)
	{
		free(NULL);
		return (NULL);
	}

	for (i = 0; str1[i] != '\0'; i++)
		;
	ptr->str = str1;
	ptr->len = i;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
