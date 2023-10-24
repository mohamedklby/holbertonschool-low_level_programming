#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line.
 * @str : string to print
 * Return: nothing
 */

void _puts(char *str)
{
	int vip;

	vip = 0;
	while (str[vip] != '\0')
		_putchar(str[vip]);
	vip++;
	putchar ('\n');
}
