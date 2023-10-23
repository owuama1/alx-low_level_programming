#include "lists.h"
/**
*sum_listint -  returns the sum of all the data (n) of a listint_t linked list.
*@head: node
*Return: the sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	int sum = 0;  /* Initialize the sum to 0*/

	while (head != NULL)
	{
		sum += head->n;  /* Add the value of the current node to the sum*/
		head = head->next;  /* Move to the next node*/
	}

	return (sum);  /* Return the sum of all data values*/
}
