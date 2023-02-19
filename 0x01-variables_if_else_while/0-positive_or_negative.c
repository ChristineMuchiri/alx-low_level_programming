#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d %s\n", n, "is positive");
	}
	if (n == 0)
	{
		printf("%d %s\n", n,  "is zero");
	}
	if (n < 0)
	{
		printf("%d %s\n", n,  "is negative");
	}
	return (0);
}
