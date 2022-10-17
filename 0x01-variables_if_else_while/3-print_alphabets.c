#include <stdio.h>

/**
 * main- prints output
 * Return: 0
 **/
int main(void)
{
	char e;
	char f;

	for (e = 'a'; e <= 'z'; e++)
	{
		putchar(e);
	}
	for (f ='A'; f <= 'Z'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
