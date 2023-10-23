#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @*a: the variable
 * @*b: the variable
 * temp: the variable
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
