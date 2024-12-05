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
	list_t *new_node;
	char *duplicated_str;

	duplicated_str = strdup(str);
	if (duplicated_str == NULL)
	{
		return (NULL);
	}
	/* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicated_str);
		return (NULL);
	}
	/* Initialiser les champs du nouveau nœud */
	new_node->str = duplicated_str;
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

