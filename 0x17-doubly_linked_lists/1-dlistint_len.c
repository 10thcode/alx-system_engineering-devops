#include "lists.h"

/**
 * dlistint_len - get the number of elements in a linked dlistint_t list.
 * @h: the head node of the list
 * Return: number of elements in @h
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	return (dlistint_len(h->next) + 1);
}
