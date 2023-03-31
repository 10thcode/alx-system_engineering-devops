#include "lists.h"
#include <stddef.h>

/**
 * list_len - gets the number of elements in a linked list_t list.
 * @h: the head node of the list
 * Return: the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (list_len(h->next) + 1);
}
