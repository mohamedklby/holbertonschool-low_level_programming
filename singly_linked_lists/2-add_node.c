#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste_t.
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @str: Chaîne de caractères à ajouter.
 *
 * Return: L'adresse du nouveau nœud, ou NULL si l'échec.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;  /* Pointeur vers le nouveau nœud */
	char *duplicated_str;  /* Pointeur pour la chaîne dupliquée */

	/* Dupliquer la chaîne str */
	duplicated_str = strdup(str);
	if (duplicated_str == NULL)
		return (NULL);  /* Si la duplication échoue, retourner NULL */

	/* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicated_str);  /* Libérer la chaî en cas d'échec d'allocation */
		return (NULL);  /* Si l'allocation échoue, returner NULL */
	}

	/* Initialiser les champs du nouveau nœud */
	new_node->str = duplicated_str; /* Affecter la chaîne dupliquée */
	new_node->len = strlen(str);
	new_node->next = *head; /* Le prochain nœud pointe vers l'ancienne tête */

	*head = new_node;

	return (new_node);  /* Retourner l'adresse du nouveau nœud */
}

