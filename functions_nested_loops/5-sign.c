#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_sign - verifie le signe d'un nombre
 *
 * write_char - Affiche un caractere sur la sortie standard
 * @c: le caractere a afficher
 *
 * Description : Cette fonction verifie si le nombre est positf,
 * negatif ou zero. Elle affiche '+' pour les nombre positifs, '
 * -' pour les nombres negatif et '0' pour zero. Elle retourne 1
 * pour les positifs, -1 pour les negatifs et 0 pour zero
 *
 */

void write_char(char c);
{
	write_char(1, &c, 1);
}

int print_sign(int n)

{
	if (n > 0)
	{
		write_char('+');
		return (1);
	}
	else if (n == 0)
	{
		write_char('0');
		return (0);
	}
	else
	{
		write_char('-');
		return (-1);
	}
}
