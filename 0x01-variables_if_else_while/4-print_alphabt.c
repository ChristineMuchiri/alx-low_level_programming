#include <stdio.h>
/**
  * main - printing alphabets except q and e
  *
  *Return: Always 0 (success)
  *
  */

int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	alph++;
	}
	putchar('\n');

	return (0);
}
