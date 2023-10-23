#include "lists.h"
#include <stdlib.h>
/**
*free_listint_safe -  frees a listint_t list.
*@head: node
*Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **head)
{
	size_t size = 0;
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;  /* Save the current node*/
		*head = (*head)->next;  /* Move the head to the next node*/
		free(current);  /* Free the current node*/
		size++;
	}

	return (size);
}
