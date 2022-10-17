#include <stdio.h>
/**
 * main - Anything.
 *
 * Return: 0 if success.
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
{
	putchar(num);
	if (num == '9')
{
	break;
}
	else
{
	putchar(',');
}
}
	putchar('\n');
	return (0);
}
