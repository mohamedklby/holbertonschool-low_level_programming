#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to search
 * @c: Character to locate in the string
 *
 * This function returns a pointer to the first occurrence of the character
 * `c` in the string `s`. If the character is not found, it returns NULL.
 *
 * Return: Pointer to the first occurrence of `c` in `s`, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
