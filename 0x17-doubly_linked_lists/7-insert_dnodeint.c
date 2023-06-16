#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a pointer to the head node of the list
 * @idx: the index of the list where the new node should be added
 * @n: the item to be added to the list
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = temp;
			new_node->prev = temp->prev;
			temp->prev->next = new_node;
			temp->prev = new_node;

			return (new_node);
		}

		i++;
		temp = temp->next;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
