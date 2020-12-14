#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: h
 * @idx: idx
 * @n: n
 * Return: Always 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *aux = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!aux || !aux->next)
			{
				return (NULL);
			}
			aux = aux->next;
		}
		new_node->next = aux->next;
		new_node->prev = aux;
		aux->next = new_node;
	}
	return (new_node);
}
