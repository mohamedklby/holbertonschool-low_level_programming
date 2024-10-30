#include <stdio.h>

/**
 * swap_int - function that swaps the values.
 *
 * @a: premier entier.
 * @b: deuxieme entier.
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
