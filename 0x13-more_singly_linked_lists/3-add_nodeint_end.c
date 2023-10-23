#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - adds a new node at the end of a listint_t list.
*@head: node
*@n: integer
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));/*Alloc memory for new node*/

	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails*/
	}

	new_node->n = n;        /* Set the value of the new node*/
	new_node->next = NULL;/*The new node will be last, so set its next to NULL*/

	if (*head == NULL)
	{
		*head = new_node;   /*If the list is empty, set the head to the new node*/
	} else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;  /* Traverse to the end of the list*/
		}

		current->next = new_node;  /* Append the new node to the end of the list*/
	}

	return (new_node);  /* Return the address of the new element*/
}
