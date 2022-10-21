#include "list.h"

/**
 * print_list - prints all the elements of a struct
 * @h: pointer to the structure
 *
 * Return: Returns the number of node
 */
size_t print_list(const list_t *h)
{
	list_t *ptr;
	size_t count;

	ptr = h;
	if (ptr == NULL)
		return (NULL);
	count = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");

		else
			printf("[%d] %s", ptr->len, ptr->str);

		ptr = ptr->next;
		count++;
	}
	return (count);
}
