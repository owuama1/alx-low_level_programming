#include "lists.h"
#include <stddef.h>
/**
*list_len - finds number of elements in a linked list_t list.
*@h: node
*Return: the number of elements in a linked list_t list.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
