#include <unistd.h>
#include <string.h>
/**
*main - print
*Return: 1
*/
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, strlen(str));
	return (1);
}
