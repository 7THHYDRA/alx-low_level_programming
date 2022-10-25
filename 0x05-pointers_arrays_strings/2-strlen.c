#include "main.h"
/**
 * _strlen - string
 * @s: s character
 * Return: lenght of string
 */

int _strlen(char *s)
{
	s = "HELL";
	int len = 0;
	int j = 0;

	while (*s != '\0')
{
	*s++;
	j++;
}
	len = j;
	return (len);
}
