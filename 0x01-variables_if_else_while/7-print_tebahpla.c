#include <stdio.h>

/**
 * main- prints output
 * Return: 0
 **/
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
