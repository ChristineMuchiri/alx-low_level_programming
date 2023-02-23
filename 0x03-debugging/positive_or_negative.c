#include <stdio.h>
/* more headers goes there */
/**
  * positive_or_negative - checks if a number is positive or negative
  * @i: integer to be checked
  * Return: Always 0 (success)
  */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d %s\n", i, "is positive");
	}
	else if (i == 0)
	{
		printf("%d %s\n", i,  "is zero");
	}
	else
	{
		printf("%d %s\n", i,  "is negative");
	}
}
