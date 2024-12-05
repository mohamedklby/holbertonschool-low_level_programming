#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste_t.
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @str: Chaîne de caractères à ajouter.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicated_str;

	/* Dupliquer la chaîne de caractères */
	duplicated_str = strdup(str);
	if (duplicated_str == NULL)  /* Vérifier si strdup a échoué */
	{
		return (NULL);
	}

	/* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)  /* Vérifier si malloc a échoué */
	{
		free(duplicated_str);  /* Libérer la mémoire allouée pour la chaîne */
		return (NULL);
	}

	/* Initialiser les champs du nouveau nœud */
	new_node->str = duplicated_str;
	new_node->len = strlen(str);  /* Stocker la longueur de la chaîne */
	new_node->next = *head;  /* Le prochain nœud sera l'ancien premier nœud */

	/* Mettre à jour la tête de la liste pour pointer vers le nouveau nœud */
	*head = new_node;

	return (new_node);  /* Retourner l'adresse du nouveau nœud */
}

