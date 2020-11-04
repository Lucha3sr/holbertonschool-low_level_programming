#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: head
 * @index: index
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *actual = *head;
	listint_t *anterior = *head;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		actual = (*head)->next;
		free(*head);
		*head = actual;
		return (1);
	}
	else
	{
		while (i != index)
		{
			if (!actual)
				return (-1);
			i++;
			anterior = actual;
			actual = actual->next;
		}
	}
	anterior->next = actual->next;
	free(actual);
	return (1);
}
