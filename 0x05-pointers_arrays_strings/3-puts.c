#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: string to print out
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i;
	int c = 0;
	int j = 0;

	while (*str != '\0')
{
	for (i = 0; i < '\0'; i++)
{
	c++;
	j = c;
}
	_putchar(str[j]);
}
	_putchar('\n');
}
