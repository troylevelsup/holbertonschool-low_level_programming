#include "holberton.h"

/**
* print_last_digit()- prints last digit
* @n: starting number
* Return: last digit of num
*/


int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num *= -1;

	_putchar(num + '0');
	return (num);

}
