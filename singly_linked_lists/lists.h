#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
    char *str; /* Chaîne de caractères */
    unsigned int len; /* Longueur de la chaîne */
    struct list_s *next;  /* Pointeur vers le prochain nœud */
} list_t;

list_t *add_node(list_t **head, const char *str);  /* Prototype de add_node */
size_t print_list(const list_t *h);  /* Prototype de print_list */


#endif
