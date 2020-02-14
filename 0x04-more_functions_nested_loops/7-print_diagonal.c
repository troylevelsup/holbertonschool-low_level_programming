#include "holberton.h"

/**
*print_diagonal- draws a diagonal line
*Return: nothing
*@n: length of line
*/


void print_diagonal(int n)
{
	int i, j;

	if (n < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
