#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * @head: head
 * @index: index
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *actual = *head;
	listint_t *aux = *head;

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
			aux = actual;
			actual = actual->next;
		}
	}
	aux->next = actual->next;
	free(actual);
	return (1);
}
