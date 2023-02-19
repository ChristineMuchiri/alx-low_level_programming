#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here */

/**
 * main - print if last digit is positive negative or 0
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes her */


	t = n % 10;

	printf("Last digit of %d is %d ", n, t);

	if (t > 5)
	{
		printf("and is greater than 5\n");
	}
	if (t == 0)
	{
		printf("and is 0\n");
	}
	if (t < 6 && t != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
