#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 **/
void print_alphabet_x10(void)
{
	int ten;
	char b;

	for (ten = 0; ten <= 9; ten++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
