#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a given string
 *
 * @str: pointer to the string to be reversed
 */

void rev_string(char *str)
{

	char *s = str;
	char *t = str;

	while (*t)
	{
		t++;
	}

	t--;

	while (s < t)
	{

		char temp = *s;
		*s = *t;
		*t = temp;
	}
}
