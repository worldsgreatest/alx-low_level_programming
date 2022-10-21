#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int num, a;

	for (num = 0; num < 10; num++)
	{
		for  (a = 0; a < 15; a++)
		{
			if (a >= 10)
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
		}
		_putchar('\n');
	}
}
