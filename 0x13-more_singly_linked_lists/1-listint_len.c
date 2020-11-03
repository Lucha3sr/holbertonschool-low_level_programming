#include "lists.h"

/**
 * listint_len - returns the number of elements in a linstint.
 * @h: h
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
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
