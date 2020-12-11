#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head
 * @idx: idx
 * @n: n
 * Return: Always 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node, *aux = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = node;
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
		aux->next = new_node;
	}
	return (new_node);
}
