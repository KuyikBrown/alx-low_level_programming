#include <stdio.h>

/** the program is to prints all the numbers of base 16 in lowercase, followed by a new line
 */

int main(void)
{
	int j;
	
	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	for (j = 97; j < 103; j++)
        {
                putchar(j);
        }
	putchar('\n');
	return (0);
}
