#include "lists.h"
#include <stdlib.h>
/**
*insert_nodeint_at_index - inserts a new node at a given position.
*@head: node
*@idx: the index
*@n: integer
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);  /* Unable to add a new node if head is NULL*/
	}

	new_node = malloc(sizeof(listint_t));  /* Allocate memory for the new node*/

	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails*/
	}

	new_node->n = n;  /* Set the value of the new node*/

	if (idx == 0)
	{
		new_node->next = *head;  /* Insert at the beginning*/
		*head = new_node;
		return (new_node);
	}
	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);  /* Index out of bounds*/
		}
		current = current->next;
	}

	temp = current->next;  /* Hold the next node temporarily*/
	current->next = new_node;  /*Insert the new node*/
	new_node->next = temp;  /* Update the new node's next pointer*/

	return (new_node);  /* Return the address of the new element*/
}
