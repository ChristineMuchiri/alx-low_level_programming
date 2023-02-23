#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry
  *
  * Return: Always 0 (success)
  */

void positive_or_negative(int i)
{
	
	if (i > 0)
	{
		printf("%d %s\n", i, "is positive");
	}
	if (i == 0)
	{
		printf("%d %s\n", i,  "is zero");
	}
	if (i < 0)
	{
		printf("%d %s\n", i,  "is negative");
	}
}
