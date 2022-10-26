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

	for (s[i] = 0; s[i] !=  '\0'; i++)
{
	c++;
}
	for (c = c - 1; c >= 0; c--)
{
	_putchar(s[c]);
}
	_putchar('\n');
}
