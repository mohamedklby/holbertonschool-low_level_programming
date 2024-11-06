#include <unistd.h>

/**
 * _print_rev_recursion - Affiche une chaîne de caractères en sens inverse.
 * @s: Pointeur vers la chaîne de caractères à afficher.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	write(1, s, 1);
}
