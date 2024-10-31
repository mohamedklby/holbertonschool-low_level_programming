#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most `n` bytes from `src`.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to use from `src`.
 *
 * Return: Pointer to the resulting string `dest`.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

		for (j = 0; j < n && src[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];
		}
	dest[i] = '\0';
	return (dest);
}
