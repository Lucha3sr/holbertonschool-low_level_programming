#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head
 * @idx: idx
 * @n: n
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *aux = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
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
		node->next = aux->next;
		aux->next = node;
	}
	return (node);
}
