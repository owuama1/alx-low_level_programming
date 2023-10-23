#include "lists.h"
#include <stdlib.h>
/**
*delete_nodeint_at_index - deletes node at 'index' of a listint_t linked list.
*@head: node
*@index: the index
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);  /* Failed to delete a node (empty list or NULL head)*/
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);  /* Successfully deleted the node*/
	}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);  /* Index out of bounds, failed to delete*/
		}
		current = current->next;
	}

	temp = current->next;
	if (temp == NULL)
	{
		return (-1);  /* Index out of bounds, failed to delete*/
	}

	current->next = temp->next;
	free(temp);
	return (1);  /* Successfully deleted the node*/
}
