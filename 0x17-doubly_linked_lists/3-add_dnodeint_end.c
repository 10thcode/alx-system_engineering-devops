#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head node of the list
 * @n: the item to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (temp != NULL && temp->next != NULL)
		temp = temp->next;

	if (temp != NULL)
		temp->next = new_node;
	else
		*head = new_node;

	new_node->prev = temp;

	return (new_node);
}
