#include "main.h"

/**
 * find_sqrt - Calcule la racine carrée de `n` en essayant progressivement.
 * @n: Le nombre dont on cherche la racine carré
 * @guess: L'essai actuel pour la racine carré
 *
 * Return: La racine carrée de `n` si elle est naturelle, sinon -1.
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (find_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - Retourne la racine carrée naturelle de `n`.
 * @n: Le nombre dont on cherche la racine carrée.
 *
 * Return: La racine carrée naturelle de `n` ou -1 si n'en a pas.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
