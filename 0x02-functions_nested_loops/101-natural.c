#include <stdio.h>
/**
* main - print sum of all multiples of 3 and 5 below 1024
* Return:  0
*/

int main(void)
{
	int i;
	long running;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			running += i;
	}
	printf("%ld\n", running);
	return (0);
}
