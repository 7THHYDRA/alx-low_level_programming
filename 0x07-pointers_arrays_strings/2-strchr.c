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

	while (s[i] < '\0')
{
	if (s[i] == c)
{
	return (s);
	i++;
}
	else
{
	continue;
	i++;
}
}
	while (s[i] == '\0')
{
	continue;
}
	return (s);
}
