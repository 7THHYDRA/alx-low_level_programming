#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - last digit
 *
 * Return : 0 if succesful.
 */
int main(void)
{
	int n;
	int ldg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldg = n % 10;
	if (ldg > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, ldg);
}
	else if (ldg == 0)
{
	printf("Last digit of %d is %d and is greater than 0\n", n, ldg);
}
	else if (ldg < 6 && ldg != 0)
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, ldg);
}
	return (0);
}
