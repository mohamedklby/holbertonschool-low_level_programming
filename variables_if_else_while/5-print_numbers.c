#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (if success)
 */

int main(void)
{
	int nombre;

	for (nombre = '0' ; nombre <= '9' ; nombre++)
		printf("%d", nombre);

	printf("\n");

	return (0);
}
