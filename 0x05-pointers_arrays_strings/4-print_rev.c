#include "main.h"

/**
 * print_rev - prints astring in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	for (n =n -1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
