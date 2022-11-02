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
	if ((s[i] = c))
	{
		return (s);
	}
	else
{
	continue;
	i++;
}
}
	if ((s[i] = '\0'))
{
	return (NULL);
}
	return (NULL);
}
