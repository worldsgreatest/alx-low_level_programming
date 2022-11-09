#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 0
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
