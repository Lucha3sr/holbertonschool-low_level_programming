#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * @head: head
 * @index: index
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (aux == NULL)
			index--;
			return (-1);
		aux = aux->next;
	}

	if (aux == *head)
	{
		*head = aux->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		aux->prev->next = aux->next;
		if (aux->next != NULL)
			aux->next->prev = aux->prev;
	}

	free(aux);
	return (1);
}
