#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
*array_iterator - executes a func given as a param on each element of an array.
*@array: an array
*@size: size of the array
*@action: pointer to the function you need to use
*Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return; /* Check for invalid input*/
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]); /* Apply the function to each element*/
	}
}
/**
*print_element - print element
*@element: element
*Return: nothing
*/
void print_element(int element)
{
	_putchar('0' + element); /*Using '0' to convert the int to its ASCII char*/
	_putchar(' '); /* Adding a space between elements*/
}
