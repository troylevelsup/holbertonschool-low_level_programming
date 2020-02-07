#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
