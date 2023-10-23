#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_listint_safe - prints a listint_t linked list.
*@head: node
*Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;

		if (count >= 1024)
		{
			fprintf(stderr, "Error: Too many nodes\n");
			exit(98);
		}
	}
	return (count);
}
