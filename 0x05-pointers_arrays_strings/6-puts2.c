#include "main.h"

/**
 * puts2 - print
 * @str: ohvr
 *
 * Return: something.
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
{
	if ((i % 2) == 0)
	_putchar(str[1]);
	else
		continue;
}
	_putchar('\n');
}
