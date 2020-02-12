#include "holberton.h"
#include <stdio.h>
/*
 * print_to_98 - prints numbers between n and 98
 * Return: 0
 * @n: starting number
 */

void print_to_98(int n)
{
	int i;

	if (n<98)
	{
		for(i = n; i<=98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d, ", n);
		}
	}
	else
	{
		for (i=n; i>=98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	printf("\n");
}
