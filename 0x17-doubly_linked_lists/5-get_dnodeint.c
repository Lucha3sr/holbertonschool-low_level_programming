#include "lists.h"

/**
 * get_dnodeint_at_index -Returns the node of a listint_t.
 * @head: head
 * @index: index
 * Return: Always 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
	{
		return (NULL);
	}
	for (node = 0; node < index; node++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
