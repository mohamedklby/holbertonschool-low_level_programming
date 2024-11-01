#include <stdio.h>

/**
 * string_toupper - Change toutes les lettres minisc d'une chaîne en majus.
 * @str: Pointeur vers la chaîne à convertir.
 *
 * Return: Pointeur vers la chaîne convertie.
 */

char *string_toupper(char *str)
{
	char *original = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (original);
}
