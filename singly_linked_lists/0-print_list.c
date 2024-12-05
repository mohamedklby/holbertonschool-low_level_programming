#include <stdio.h>
#include "lists.h"

/**
 * print_list - Affiche tous les éléments d'une liste_t.
 * @h: Pointeur vers la tête de la liste.
 *
 * Return: Le nombre de nœuds dans la liste.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;  /* Compteur de nœuds */

	/* Parcours de la liste */
	while (h != NULL)
	{
		/* Si la chaîne est NULL, on affiche [0] (nil) */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			/* Affichage de la longueur de la chaîne suivie de la chaîne elle-même */
			unsigned int len = 0;  /* Utilisation d'un unsigned int pour la longueur */
			const char *str_ptr = h->str;

			/* Calcul de la longueur de la chaîne */
			while (*str_ptr != '\0')
			{
				len++;
				str_ptr++;
			}

			/* Affichage de la longueur et de la chaîne */
			printf("[%u] %s\n", len, h->str);  /* Utilisation de %u pour unsigned int */
		}

		h = h->next;  /* Passage au nœud suivant */
		count++;      /* Incrémenter le compteur de nœuds */
	}

	/* Affichage du nombre d'éléments dans la liste */
	printf("-> %u elements\n", (unsigned int)count);

	return (count);  /* Retourner le nombre de nœuds */
}

