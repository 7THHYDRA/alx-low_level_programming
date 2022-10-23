#include "main.h"
/**
 * print_last_digit - last digit.
 * @num: integer
 *
 * Return: return last digit.
 */

int print_last_digit(int num)
{
	num;
	int last_va = num % 10;

	if (num >= 10)
{
	_putchar(last_va);
}
	else
{	_putchar(num);
	return (last_va);
}
}
