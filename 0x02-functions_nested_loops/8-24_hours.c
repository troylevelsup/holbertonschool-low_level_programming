#include "holberton.h"

/**
* jack_bauer- prints very minute of the day of jack bauer
* Return: 0
*/

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours<24; hours++)
	{
		for (minutes = 0; minutes <= 4; minutes++)
		{
			if (hours < 10)
				_putchar('0' + 0);
			_putchar(hours);
			_putchar(':');
			if (minutes<10)
				_putchar('0' + 0);
			_putchar(minutes+0);
			_putchar('\n');
		}
	}
}
