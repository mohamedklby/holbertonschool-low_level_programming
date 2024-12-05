#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste_t.
 * @head: Pointeur vers le pointeur de la tête de la liste.
 * @str: Chaîne de caractères à ajouter dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL si l'ajout a échoué.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	/* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Dupliquer la chaîne str */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculer la longueur de la chaîne */
	new_node->len = 0;
	while (new_node->str[new_node->len] != '\0')
	{
		new_node->len++;
	}

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Sinon, trouver le dernier nœud de la liste */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/* Ajouter le nouveau nœud à la fin */
	last_node->next = new_node;
	return (new_node);
}

