#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Crée un tableu et l'initialise
 * @taille: La taille du tableau
 * @c: caractère utilisé pour initialiser chaque élément du tableau.
 *
 * Return: Un pointeur vers le tableau
 */

char *create_array(unsigned int taille, char c)
{
	char *tableau;
	unsigned int i;

	if (taille == 0)
	{
		return (NULL);
	}

	tableau = (char *)malloc(taille * sizeof(char));

	if (tableau == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < taille; i++)
	{
		tableau[i] = c;
	}

	return (tableau);
}
