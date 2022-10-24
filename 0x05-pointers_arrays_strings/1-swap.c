#include "main.h"
/**
 * swap_int - integers getting swapped!!
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	*a = 98;
	*b = 42;

	temp = *b;
	*b = *a;
	*a = temp;
}
