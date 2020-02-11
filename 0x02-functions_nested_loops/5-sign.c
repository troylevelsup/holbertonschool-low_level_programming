#include "holberton.h"

/**
* print_sign- determines polarity of a number
* Return: 0 if 0, 1 if positive, and -1 if less than zero
* @n: number print_sign checks
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
