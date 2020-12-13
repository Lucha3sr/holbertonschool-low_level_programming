#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list
 * @head: head
 * @n: n
 * Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
