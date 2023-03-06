#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print out
 *
 * Return: on success 1.
 * On error, -1 is returned amd errno is set approrpriately
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
