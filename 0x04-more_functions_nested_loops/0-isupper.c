#include "holberton.h"
/**
* _isupper- checks to see if uppercase
* Return: 0 for lowercase, 1 for uppercase
* @c: int isupper checks
*/

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);

	else
		return (0);
}
