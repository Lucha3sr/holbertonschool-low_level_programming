#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;
	unsigned long int the_comma = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];

		while (node)
		{
			if (the_comma == 1)
				printf(", ");

			the_comma = 1;
			printf("'%s': '%s'", (char *) node->key, (char *) node->value);
			node = node->next;
		}
	}

	printf("}\n");
}
