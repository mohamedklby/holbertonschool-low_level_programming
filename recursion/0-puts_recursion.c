#include <stdio.h>
#include <unistd.h>

/**
 * _puts_recursion - Affiche une chaîne de caract�
 * @s: Pointeur vers la chaîne de caractères �
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	_puts_recursion(s + 1);
}
