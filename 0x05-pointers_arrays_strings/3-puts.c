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

	while (*str != '\0')
{
	for (i = 0; i < '\0'; i++)
{
	_putchar(*(str + i));
}
}
	_putchar('\n');
}
