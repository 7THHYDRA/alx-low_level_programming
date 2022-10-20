#include "main.h"
/**
 * _isalpha - checks for capital.
 * @c: alpha character.
 *
 * Return: 1 if sucessful and 0 if otherwise.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
{
	return (1);
}
	else if (c >= 90 && c <= 97)
{
	return (0);
}
	else
	return (0);
}
