#include "main.h"

/**
 * _strchr - search
 * @s: string of chars
 * @c: character
 *
 * Return: char.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
{
	if (*s != c)
	s++;
	else
		return (s);
}
	if (c == '\0')
	return (s);
	
	return (NULL);
}
