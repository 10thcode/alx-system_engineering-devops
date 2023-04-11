#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list.
 * @head: the head of the list.
 * @index: the element to get
 * Return: the node at index in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	static unsigned int i = ZERO;

	if (index == i)
		return (head);

	if (head->next == NULL)
		return (NULL);

	i++;

	return (get_nodeint_at_index(head->next, index));
}
