#include <stdio.h>
/**
 * main - program entry no point.
 * Return: 0 if no error,non zero if error.
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
{
	if (i == 113 || i == 101)
	continue;
	putchar(i);
}
	putchar('\n');
	return (0);
}
