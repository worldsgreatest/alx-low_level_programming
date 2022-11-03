#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number you are finding factorial of
 *
 * Return: if n < 0 return -1 to indicate error
 */
int factorial(int n)
{
	int r = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
}
