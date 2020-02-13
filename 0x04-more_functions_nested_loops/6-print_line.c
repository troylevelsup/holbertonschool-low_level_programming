#include "holberton.h"

/**
* print_line - prints a line n number of times
* Return: void
* @n: length of line
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		_putchar('_');
	}
	_putchar('\n');
}
