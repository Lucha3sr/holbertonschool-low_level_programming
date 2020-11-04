#include "lists.h"

/**
 * get_nodeint_at_index -Returns the node of a listint_t.
 * @head: head
 * @index: index
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
		return (head);
}
