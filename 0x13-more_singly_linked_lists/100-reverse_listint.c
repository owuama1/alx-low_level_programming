#include "lists.h"
/**
*reverse_listint -  reverses a listint_t linked list.
*@head: node
*Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next;  /* Save the next node*/
		(*head)->next = prev;  /* Reverse the current node's next pointer*/
		prev = *head;          /* Move the prev pointer to the current node*/
		*head = next;          /* Move the head pointer to the next node*/
	}

	*head = prev;  /*Update the head to point to 1st node of the reversed list*/
	return (*head);  /* Return a pointer to the first node of the reversed list*/
}
