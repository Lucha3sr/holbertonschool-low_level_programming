#include "lists.h"

/**
 * free_listint2 - free a listint.
 * @head: head
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	while (*head)
	{
		aux =(*head)->next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}
