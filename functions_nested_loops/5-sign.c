#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_sign - affiche le signe d'un nombre
 *
 * @n L'entier dont le signe est a verifier
 *
 * write_char - writes a character to standard output
 *
 * @c: the character to write
 *
 */

void write_char(char c)
{
	write(1, &c, 1);
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
