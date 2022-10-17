#include <stdio.h>
/**
 * main - Anything.
 *
 * Return: 0 if success.
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
{
	putchar(num);
	if (num == '9')
	break;
	putchar(',');
	putchar(' ');
	num++;
}
	putchar('\n');

	return (0);
}
