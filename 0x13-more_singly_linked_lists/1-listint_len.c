#include "lists.h"
#include <stddef.h>

/**
 * listint_len - calculates the number of elements in a linked listint_t list.
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	return (listint_len(h->next) + 1);
}
