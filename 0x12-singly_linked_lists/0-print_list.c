#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of list..
 * @h: h
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t nbrnodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
				nbrnodes++;
		h = h->next;
	}
		return (nbrnodes);
}
