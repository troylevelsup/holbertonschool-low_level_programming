#include <stdio.h>
/**
* main - prints the alphabet in lowercase, then uppercase
*
* Return: 0
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
