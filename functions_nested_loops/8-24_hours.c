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
			snprintf(buffer, sizeof(buffer), "%02d:%02d", hour, minute);
			write(1, buffer, 5);
			write(1, "\n", 1);
		}
	}
}
