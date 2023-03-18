#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** main - the code is to Print all the letters except q and e
 * also purpose of the code is not to use putchar twice in your code
 * return: always return 
 */
int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && 1 != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
