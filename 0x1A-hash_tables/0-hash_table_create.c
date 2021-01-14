#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 * Return: Returns a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int i;
	hash_table_t *h_table = NULL;
	hash_node_t **array_to_nodes = NULL;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
	{
		return (NULL);
	}
	arr_nodes = malloc(sizeof(hash_node_t *) * size);
	if (arr_nodes == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr_nodes[i] = NULL;
	}
	h_table->size = size;
	h_table->array = arr_nodes;
	return (h_table);
}