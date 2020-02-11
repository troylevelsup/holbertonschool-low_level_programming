#include "holberton.h"

/**
* main - entry point
*
* Return: 0
*/

int main(void)
{
	int i;
	char holb[9] = "Holberton";

	for (i = 0; i <= 9; i++)
	{
		_putchar(holb[i - 1]);
	}
	_putchar('\n');
	return (0);
}
