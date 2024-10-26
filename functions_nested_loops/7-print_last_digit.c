#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Affiche et retourne le dernier chiffre d'un nombre
 * @number: L'entier dont on veut obtenir le dernier chiffre
 *
 * Description: Cette fonction affiche et retourne le dernier chiffre
 * de l'entier passé en paramètre, en utilisant `abs` pour gérer les
 * nombres négatifs et `% 10` pour isoler le dernier chiffre.
 *
 * Return: Le dernier chiffre de l'entier.
 */

int print_last_digit(int number)
{

	int last_digit = abs(number) % 10;
	char c = last_digit + '0';

		write(1, &c, 1);

	return (last_digit);
}
