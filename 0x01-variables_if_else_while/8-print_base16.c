#include <stdio.h>

/**
 * main- prints output
 * Return: 0
 **/
int main(void)
{
	int d;
	char hexvalues[] = "0123456789abcdef";

	for (d = 0; d < 16; d++)
	{
		putchar(hexvalues[d]);
	}
	putchar('\n');
	return (0);
}
