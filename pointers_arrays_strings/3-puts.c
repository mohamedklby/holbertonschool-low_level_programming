#include "main.h"

/**
 * _puts - Imprime une chaîne de caractères, suivie d'un saut de ligne
 *
 * @str: Pointeur vers la chaîne de carateres a imprimer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}


