#include <stdio.h>

/** the code is to prints the lowercase alphabet in reverse, followed by a new line.
 */

int main(void)
{
	char wr;
	for (wr = 'z'; wr >= 'a'; wr--)
	{
		putchar(wr);
	}
	putchar('\n');
	return (0);
}
