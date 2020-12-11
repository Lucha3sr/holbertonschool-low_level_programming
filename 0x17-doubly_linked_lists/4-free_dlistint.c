#include "lists.h"

/**
 * free_dlistint - free a listint.
 * @head: head
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
