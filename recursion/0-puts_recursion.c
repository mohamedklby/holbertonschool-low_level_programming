#include <stdio.h>
#include <unistd.h>

/**
 * _puts_recursion - Affiche une cha√Æne de caract√
 * @s: Pointeur vers la cha√Æne de caract√®res √
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
