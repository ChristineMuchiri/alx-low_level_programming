#include "main.h"
#include <stdio.h>
/**
  * print_alphabet_x10 - print alphabet 10 times in lower case
  *
  * Return: Always 0 (success)
  */

void print_alphabet_x10(void)
{
	int i;
	int j;
	char m;

	for (i = 1; i <= 10; i++)
	{
	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	}
}
