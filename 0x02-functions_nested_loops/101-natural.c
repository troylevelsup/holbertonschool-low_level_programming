#include <stdio.h>

int main(void)
{
	int i;
	int running;
	
	for(i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			running += i;
	}
	printf("%d \n", i);
	return (0);
}
