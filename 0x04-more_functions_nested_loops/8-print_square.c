#include "holberton.h"
/**
* print_square(int size)- prints square based on size
* @size: size of square
* Return: void
*/

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
