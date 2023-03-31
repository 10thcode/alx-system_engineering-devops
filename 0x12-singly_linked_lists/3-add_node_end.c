#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head node of the list
 * @str: the string to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *new;
	char *str_cp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	str_cp = strdup(str);

	if (str_cp == NULL)
	{
		free(new);
		free(str_cp);
		return (NULL);
	}

	new->str = str_cp;
	new->len = _strlen(str_cp);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		for (tail = *head; tail->next != NULL; tail = tail->next)
			;
		tail->next = new;
	}

	return (new);
}

/**
 * _strlen - gets length of a string
 * @str: the string
 * Return: the length of str
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
