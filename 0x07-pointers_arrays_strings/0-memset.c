#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: pointer to b.
 * @b: array of characters.
 * @n: unsigned int,indicating number.
 *
 * Return: a char .
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
{
	s[i] = b;
	return (s);
	i++;
}
	return (0);
}
