#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 * Return: Returns a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_h_table = NULL;

	new_h_table = malloc(sizeof(hash_table_t));
	if (new_h_table == NULL)
	{
		return (NULL);
	}
	new_h_table->size = size;
	new_h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_h_table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_h_table->array[i] = NULL;
	}
	return (new_h_table);
}
