#include "lists.h"
/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: node
*@: index
*Return: the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;  /* Initialize an index counter*/

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);  /* Return the node when the index matches*/
		}
		head = head->next;
		i++;  /* Increment the index counter*/
	}

	return (NULL);  /* Return NULL if the node does not exist*/
}
