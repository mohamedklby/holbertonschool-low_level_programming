#include "main.h"

/**
 * _isupper - check a uppercase caracter
 * @c: The char to check
 *
 * Return: 1 if c is uppercase, 0 etherwise
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

