#include <stdio.h>

/**
 * code to print all the possible different combination between two numbers.
 *
 * .
 */

int main(void)
{
	int w, m;

	for (w = 48;  w <= 56; w++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (w > m)
			{
				putchar(w);
				putchar(m);
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}



