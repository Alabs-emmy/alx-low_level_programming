#ifndef _LISTS_H
#define _LISTS_H

/**
 * Description - header file forthe folder 0x13-more_singly_linked_list
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h)

#endif /* _LIST_H */