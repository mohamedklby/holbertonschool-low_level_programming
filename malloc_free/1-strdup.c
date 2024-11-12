#include <stdlib.h>

/**
 * _strdup - Retourne un pointeur vers un nouvel espace mémoir
 * @str: La chaîne à dupliquer.
 *
 * Return: Un pointeur vers la nouvelle chaîn
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{

	}
	dup_str = (char *)malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len] = '\0';

	return (dup_str);
}
