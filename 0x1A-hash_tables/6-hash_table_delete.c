#include "hash_tables.h"

/**
 *hash_table_delete - function that deletes a hash table
 *@ht: Hash table
 *
 *Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *aux = NULL;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			aux = tmp;
			free(tmp->key);
			free(tmp->value);
			tmp = tmp->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
