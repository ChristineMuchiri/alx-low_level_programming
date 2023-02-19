#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
  *main - printing alphabets in lowercase
  *
  *Return: always 0 (success)
  */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
