#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             of integers using the jump search algorithm.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step_size, step;
    listint_t *node, *jump;

    if (list == NULL || size == 0)
        return NULL;

    step_size = sqrt(size);
    for (jump = list; jump->next && jump->n < value; jump = jump->next)
    {
        node = jump;
        for (step = 0; jump->next && step < step_size; step++, jump = jump->next)
            printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", node->index, jump->index);

    for (; node->index < jump->index && node->n < value; node = node->next)
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

    return (node->n == value ? node : NULL);
}
