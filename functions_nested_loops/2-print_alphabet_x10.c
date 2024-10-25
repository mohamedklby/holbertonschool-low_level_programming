#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: always 0 (Success)
 */

void print_alphabet_x10(void)

{
	int i;

	for (i = 0; i < 10; i++)

		for (i = 'a'; i <= 'z'; i++)

			_putchar(i);

	_putchar('\n');

}
