#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverses a string.
 *
 * @s: - a caracter string to reverse
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
