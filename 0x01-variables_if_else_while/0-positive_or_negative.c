#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - The program is to determine the outcome of a number 
 *if  it is positive or negative 
 *return o
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else 
	{
		printf("%d is Negative", n);
	}
	return (0);
}