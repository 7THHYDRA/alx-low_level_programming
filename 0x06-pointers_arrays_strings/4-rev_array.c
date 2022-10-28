#include "main.h"

/**
 * reverse_array - reverse the content of array
 * @a: int to check
 * @n: no of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
}
}
