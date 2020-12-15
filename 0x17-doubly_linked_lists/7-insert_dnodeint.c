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
	dlistint_t *aux = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		aux = aux->next;
		idx--;
		if (aux == NULL)
			return (NULL);
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = aux;
	new_node->next = aux->next;
	aux->next->prev = new_node;
	aux->next = new_node;

	return (new_node);
}
