#include "lists.h"

/**
 * free_listint - free a listint.
 * @head: head
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
