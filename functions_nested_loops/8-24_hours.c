#include <stdio.h>
#include <unistd.h>

/**
 * jack_bauer - Affiche toutes les heures de la journée.
 *
 * Description: Cette fonction affiche toutes les heures
 * de 00:00 à 23:59.
 */

void jack_bauer(void)
{
	int hour, minute;
	char buffer[6];

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			buffer[0] = (hour / 10) + '0';
			buffer[1] = (hour % 10) + '0';
			buffer[2] = ':';
			buffer[3] = (minute / 10) + '0';
			buffer[4] = (minute % 10) + '0';
			buffer[5] = '\n';

			write(1, buffer, 6);
		}
	}
}
