#include <stdio.h>
/**
 * main - Anything.
 *
 * Return: 0 if success.
 */

int main(void)
{
	int row = 48;
	int irow = row;
	int column = 49;
	int icolumn = column;

	for (row = irow; row <= 56; row++)
{
	for (column = icolumn; column <= 57; column++)
{
	putchar(row);
	putchar(column);
	if (row == '8' && column == '9')
	break;
	putchar(',');
	putchar(' ');
}
	irow++;
	icolumn++;
}
	putchar('\n');
	return (0);
}
