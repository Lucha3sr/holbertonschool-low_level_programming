#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element;
	char *aux_value, *aux_key;

	if (ht == NULL || value == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	aux_value = strdup(value);
	new_element = malloc(sizeof(hash_node_t));

	if (new_element == NULL)
	{
		free(new_element);
		return (0);
	}
	aux_key = strdup(key);
	new_element->key = aux_key;
	new_element->value = aux_value;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
