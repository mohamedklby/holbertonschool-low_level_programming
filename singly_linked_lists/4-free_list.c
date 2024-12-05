#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Libère une liste_t.
 * @head: Pointeur vers la tête de la liste.
 *
 * Description: Cette fonction libère chaque nœud de la liste,
 * y compris la chaîne de caractères contenue dans chaque nœud.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;  /* Déplace le pointeur vers le nœud suivant */
		free(temp->str);    /* Libère la chaîne du nœud courant */
		free(temp);         /* Libère la mémoire du nœud courant */
	}
}

