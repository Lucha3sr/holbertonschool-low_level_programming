#include "lists.h"

/**
 * dlistint_t - returns the number of elements in a linstint.
 * @h: h
 * Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
