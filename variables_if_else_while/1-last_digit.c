#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	printf("Dernier chiffrre de %d est %d", n, d);

	if (d > 5)
		printf("est superieur a 5 \n");
	else if (d == 0)
		printf("et est 0\n");
	else
		printf("est inferieur a 6 et non a 0\n");
	return (0);
}
