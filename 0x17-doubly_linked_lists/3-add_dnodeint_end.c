#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a listint_t list.
 * @head: head
 * @n: n
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *aux = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new_node;
		aux->prev = aux;
	}
	return (new_node);
}
