#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of element of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int e;
	int f;

	for (e = 0; e < n; e++)
	{
		n--;
		f = a[e];
		a[e] = a[n];
		a[n] = f;
	}
}
