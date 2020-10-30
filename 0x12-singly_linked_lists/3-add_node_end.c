#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list.
 * @head: head
 * @str: str
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
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
	new->next = NULL;
	*head = new;
	last->next = new;
}
