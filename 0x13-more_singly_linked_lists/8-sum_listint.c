#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t.
 * @head:head
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum += (listint_t *(head));
	head = head->next;
	return (sum);
}
