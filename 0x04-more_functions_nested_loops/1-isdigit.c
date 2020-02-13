#include "holberton.h"
/**
* _isdigit- determins if c is a digit
* Return: 1 if c is a digit, return 0 otherwise
* @c: char checked by _isdigit
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	else
		return (0);
}
