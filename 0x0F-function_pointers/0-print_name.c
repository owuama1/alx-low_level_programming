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
*print_name - prints name of function
*@f: function pointer
*@name: name
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
/**
*print_name_function - print name of function
*@name: name
*Return: nothing
*/
void print_name_function(char *name)
{
	if (name != NULL)
	{
		while (*name)
		{
			_putchar(*name);
			name++;
		}
		_putchar('\n');
	}
}
