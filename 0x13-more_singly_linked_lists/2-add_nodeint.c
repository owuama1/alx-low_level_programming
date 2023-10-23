#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - adds a new node at the beginning of a listint_t list.
*@head: node
*@n: integer
*Return:  address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));/*Alloc memory for new node*/

	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails*/
	}

	new_node->n = n;        /* Set the value of the new node*/
	new_node->next = *head; /* Point the new node to the current head*/

	*head = new_node;       /* Update the head to the new node*/

	return (new_node);/* Return the address of the new element*/
}
