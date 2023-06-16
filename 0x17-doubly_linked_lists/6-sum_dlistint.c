#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data (n) of a dlistint_t linked list.
 * @head: the head node of the list
 * Return: sum of element in the list
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (sum_dlistint(head->next) + head->n);
}
