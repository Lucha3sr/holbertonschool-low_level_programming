#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t and returns the head data.
 * @head: head
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = aux->n;
	*head = aux->next;
	free(aux);
	return (data);
}
