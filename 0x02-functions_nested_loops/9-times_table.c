#include "holberton.h"

/**
*times_table()- prints the 9 times tables
*Return: nothing
*/

void times_table(void)
{
	int x;
	int y;
	int product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;

			if (y != 0)
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			if (product < 10)
				_putchar(product + '0');
			else
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
