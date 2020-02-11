#include "holberton.h"

/**
* _abs- computes the absolute value of an integer
* @num: number that _abs checks
* Return: absolute value of given int
*/

int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
