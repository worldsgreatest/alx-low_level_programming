#include <stdio.h>

/**
 * main- prints the output
 * Return: 0
 **/
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p == 'e' || p == 'q')
			continue;
		putchar(p);
	}
	putchar('\n');
	return (0);
}
