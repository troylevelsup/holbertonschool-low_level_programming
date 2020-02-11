#include "holberton.h"

/**
* _isalpha- checks for lowercase character
* @c: int that _isalpha checks
* Return: 1 if lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
