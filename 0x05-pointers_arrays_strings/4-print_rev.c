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
	int j = 0;

	for (i = 0; i != '\0'; i++)
{
	j = i;	
	for (j = j - 1; j <= 0; j--)
{
	_putchar(s[j]);
}
}
	_putchar('\n');
}
/**
 * let j equals length of string after counting.
 *
 */
