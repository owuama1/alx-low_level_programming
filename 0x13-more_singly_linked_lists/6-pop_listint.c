#include "lists.h"
#include <stdlib.h>
/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: node
*Return: data of the deleted head node (0 if the list is empty)
*/
int pop_listint(listint_t **head)
{
	int data = 0;  /* Initialize data to 0*/

	if (*head != NULL)
	{
		listint_t *temp = *head;  /* Create a temporary pointer to the head node*/

		data = temp->n;           /* Get the data of the head node*/
		*head = temp->next;       /* Update the head to the next node*/
		free(temp);               /* Free the old head node*/
	}

	return (data);
}
