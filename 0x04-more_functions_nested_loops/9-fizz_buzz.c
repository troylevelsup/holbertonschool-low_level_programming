#include "holberton.h"
#include <stdio.h>
/**
* main- its fizzbuzz lol
* Return: nothing
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
			if (i < 99)
				printf(" ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
		{
			printf("%d ", i);
			continue;
		}
	}
	putchar('\n');
	return (0);
}
