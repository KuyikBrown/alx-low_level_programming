#include <stdio.h>

/**
 * a program that prints all possible combinations of single-digit numbers
 */

int main(void)
{
	int w;

	for (w = 48; w < 58; w++)
	{
		putchar(w);
		if (w != 57)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
