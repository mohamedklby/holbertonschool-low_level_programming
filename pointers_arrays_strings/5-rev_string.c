#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Write a function that reverses a strling.
 * @s: string to be return 
 * Return: nothing
 */

void rev_string(char *s)
{
	int o, tmp, men = strlen(s);

	while (*(s + men) != '\0')
                men++;
	for (o = 0; o < men / 2; o++)
	{
		tmp = *(s + o);
		*(s + o) = *(s + men - o - 1);
		*(s + men - o - 1) = tmp;
	}
}

