#include <stdio.h>

/**
 * a program that prints all possible different combinations of three digits. in c
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits
 * Numbers should be printed in ascending order, with three digits
 */

int main(void)
{
	int n, m, l;
	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if ( l > n && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar('.');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
