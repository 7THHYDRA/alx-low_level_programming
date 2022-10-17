#include <stdio.h>
/**
 * main - anything.
 * 
 * Return: 0 if success.
 *
 */

int main(void)
{
	int i;
	char hv[] = "0123456789abcdef";

	for (i = '0'; i < 16; i++)
{
	putchar(hv[i]);
}
	putchar('\n');
	return (0);
}
