#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node_end - adds a node at the end of a list
*@head: the head
*@str: string
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL); /* Return NULL if str is NULL*/
	}

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL); /* Return NULL if strdup fails*/
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node; /* If the list is empty, make the new node the head*/
	} else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
