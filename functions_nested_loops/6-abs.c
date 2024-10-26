#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer * @n: The
 * integer to be checked
 *
 * @n: l'entier a v√rifier
 *
 * Description: Cette fonction retourne la valeur absolue de
 * l'entier donner. Elle renvoie l'entier lui-m√me si il est
 * positif ou nul, et son oppos√©si il est n√gatif
 *
 * Return: la valeur de l'entier
 */

int _abs(int n)

{
	if (n < 0)
		return (-n);
	else
		return (n);
}
