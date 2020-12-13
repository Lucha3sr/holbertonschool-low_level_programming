#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of list.
 * @h: h
 * Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbrnodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		nbrnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nbrnodes);
}
