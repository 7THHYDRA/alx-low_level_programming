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

	for (s[i] = 0; s[i] != '\0';)
{
	i++;
	for (i = i - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
}
	_putchar('\n');
}
