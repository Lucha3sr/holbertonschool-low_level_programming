#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head
 * @str: str
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new->str = strdup(str);
	new->len = i;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != '\0')
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
