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

	while (*s < '\0')
{
	if (*s == c)
{
	return (s);
}
	else
{
	continue;
	i++;
}
}

	while ((*s = '\0'))
{
	return (NULL);
}
	return (NULL);
}
