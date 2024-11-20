#include <stddef.h>
/**
 * int_index - Cherche un entier dans un tableau
 * @array: Pointeur vers le tableau d'entiers.
 * @size: Taille du tableau.
 * @cmp: Pointeur vers la fonction de comparaison.
 *
 * Return: l'index du premier element
 * Si aucun élément ne correspond ou si size <= 0, retourne -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
