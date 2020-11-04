#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head: head
 * @n: n
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (new);
}
