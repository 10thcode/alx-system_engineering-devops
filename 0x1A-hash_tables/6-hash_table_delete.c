#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
 * free_list - free a linked list
 * @head: the head node of the linked list
 */
void free_list(hash_node_t *head)
{
	if (head == NULL)
		return;

	if (head->next == NULL)
	{
		free(head->key);
		free(head->value);
		free(head);
		return;
	}

	free_list(head->next);

	free(head->key);
	free(head->value);
	free(head);
}
