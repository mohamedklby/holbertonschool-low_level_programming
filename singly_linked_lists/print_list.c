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
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");  /* Afficher (nil) si la chaîne est NULL */
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);  /* Afficher la chaîne et sa longueur */
        }

        h = h->next;  /* Passage au nœud suivant */
        count++;      /* Incrémenter le compteur de nœuds */
    }

    return count;  /* Retourner le nombre de nœuds */
}

