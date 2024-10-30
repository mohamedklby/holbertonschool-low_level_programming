#include "main.h"

/**
 * swap_int - function that swaps the values.
 *
 * @a: premier entier.
 * @b: euxieme entier.
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = temp;
	swap_int(&*a, &*b);
}
