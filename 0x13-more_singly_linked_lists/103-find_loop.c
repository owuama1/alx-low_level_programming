#include "lists.h"
/**
*find_listint_loop - finds the loop in a linked list.
*@head: node
*Return: address of node where the loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{  /*Loop detected*/
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);  /* Address of the node where the loop starts*/
		}
	}

	return (NULL);  /* No loop found*/
}
