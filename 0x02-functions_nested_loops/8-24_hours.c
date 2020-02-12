#include "holberton.h"

/**
* jack_bauer- prints very minute of the day of jack bauer
* Return: 0
*/

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			/*hours first digit*/
			_putchar((hours / 10) + '0');
			/*hours second digit*/
			_putchar((hours % 10) + '0');
			_putchar(':');
			/*minutes first digit*/
			_putchar((minutes / 10) + '0');
			/*minutes second digit*/
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
