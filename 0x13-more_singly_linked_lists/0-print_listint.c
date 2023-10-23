#include <stdio.h>
#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list.
*@h: node
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;  /* Initialize a counter for the number of nodes*/

	while (h != NULL)
	{
		printf("%d\n", h->n);  /* Print the value of the current node*/
		h = h->next;  /* Move to the next node*/
		count++;
	}

	return (count);  /*Return the number of nodes*/
}
