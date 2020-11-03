#include "lists.h"

/**
 * print_listint - prints all the elements of listint.
 * @h: h
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t nbrnodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%i\n", h->n);
		nbrnodes++;
		h = h->next;
	}
	return (nbrnodes);
}
