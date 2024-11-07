#include "main.h"

/**
 * is_divisible - Vérifie si `n` est divisible par `i`.
 * @n: Le nombre à vérifier.
 * @i: Le diviseur possible.
 *
 * Return: 0 si `n` est divisible par `i`, 1 sinon.
 */
int is_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_divisible(n, i + 1));
}
/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si le nombre est premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, 2));
}





