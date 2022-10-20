#include "main.h"

/**
 * positive_or_negative - causes an infinite loop
 * @i: integer value
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	i = 0;
	positive_or_negative(i);

	return (0);
}
