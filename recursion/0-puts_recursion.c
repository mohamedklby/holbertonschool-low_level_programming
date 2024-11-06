#include <stdio.h>

/**
 * _puts_recursion - Affiche une chaîne de caractèr
 * @s: Pointeur vers la chaîne de caractères à afficher.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
