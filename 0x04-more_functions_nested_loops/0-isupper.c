#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable text
 * Return: 1 if is an uppercase character 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
