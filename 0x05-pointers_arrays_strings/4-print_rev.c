#include "main.h"
/**
 * print_rev - (char *s)
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] !=  '\0')
{
	i++;
	for (c = i - 1; c >= 0; c--)
{
	_putchar(s[c]);
}
	_putchar('\n');
}
}
