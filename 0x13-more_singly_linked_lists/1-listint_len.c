#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: node
*Return: number of elements in a linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;  /* Initialize a counter for the number of elements*/

	while (h != NULL)
	{
		count++;   /* Increment the count for each element*/
		h = h->next;    /* Move to the next element*/
	}

	return (count);  /* Return the total count of elements*/
}
