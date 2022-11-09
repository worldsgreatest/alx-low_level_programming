#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: the argc parameter
 * @argv: an array of command listed
 * Return: return 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
